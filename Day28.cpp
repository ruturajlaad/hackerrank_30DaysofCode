int main()
{
    string N_temp;
    getline(cin, N_temp);

    int N = stoi(ltrim(rtrim(N_temp)));
    
    vector<string>gmailUsers;
    regex gmailRegex(".+@gmail\\.com$");
    

    for (int N_itr = 0; N_itr < N; N_itr++) {
        string first_multiple_input_temp;
        getline(cin, first_multiple_input_temp);

        vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

        string firstName = first_multiple_input[0];

        string emailID = first_multiple_input[1];
        
        if(regex_match(emailID,gmailRegex)){
            gmailUsers.push_back(firstName);
        }
    }
    
    sort(gmailUsers.begin(),gmailUsers.end());
    
    for(const string& name : gmailUsers){
        cout<<name<<endl;
    }

    return 0;
}
