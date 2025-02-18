class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
       unordered_set<string> uniqueEmails;

    for (string email : emails) {
        string local, domain;
        bool plusFound = false;

        int i = 0;
        while (email[i] != '@') {
            if (email[i] == '.') {
                i++; 
                continue;
            }
            if (email[i] == '+') {
                plusFound = true;
            }
            if (!plusFound) {
                local += email[i];
            }
            i++;
        }

        domain = email.substr(i); 
        uniqueEmails.insert(local + domain);
    }

    return uniqueEmails.size();

        
    }
};