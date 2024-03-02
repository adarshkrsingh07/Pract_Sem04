## Experiment no - 03 To create and explore Push/Pull requests.  
**1. Aim/Overview of the practical:** To create and explore Push/Pull requests.  
**2. Task to be done:** Creating a file in your Local repository and pushing it to remote repository and pulling the file from the remote repository to local repository.  
**3.Software Used:** Git Bash, GitHub.  
4**. Steps for Experiment: -**    
1) Configure your credentials before working on your local repository i.e.(user name , user email).![Screenshot 2024-03-02 204945](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/52a22b88-94e4-473f-b817-251cd932e8ac)
  
2) Apart from this, clone your repository in local machine. It will make a complete copy of your repository.![Screenshot 2024-03-02 204954](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/17f035da-261a-415f-889d-a8323aa66f5e)

3) Check if a repository already exists, if not, then create a repository using (mkdir repo_
name), if yes, then go to your repository i.e. (cd 22BCD-1).
4) Now check for the branches and for the files i.e. (git branch & ls)![Screenshot 2024-03-02 205004](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/4b80b371-feb5-47fd-8a4b-9196f1ddb638)

5) Now create a file in Main_branch by using vi i.e. (vi exp3.txt) and some text/message
inside it.![Screenshot 2024-03-02 205015](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/cd0d4403-7962-40ee-9978-48cc2c26a831)

6) Now, Adding the file to the staging area using git add and then commit the changes
using the git commit command.![Screenshot 2024-03-02 205025](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/69b671a7-c0d9-4d48-a552-6ac6da029ebe)

7) Now, check for the status in your main branch if any file was not added or commited
then add & commit it.![Screenshot 2024-03-02 205032](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/9cb1a8f6-4f44-43b3-95e2-4ee86f24b51a)

8) Now, go to the new branch i.e.(test_Branch) and write some text/message inside it.![Screenshot 2024-03-02 205038](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/9f7e6844-8239-42ac-a0a8-210c0216563a)

9) Now, open the same file in the (test_Branch) which was created in Main_branch and
do some changes in it.![Screenshot 2024-03-02 205048](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/d30a2c6c-f73e-4041-a77f-cfcc1915e75e)

 10) Now, Add the file i.e. (git add .) so that it can be track and commit it i.e. (git commit)
by using git commands.![Screenshot 2024-03-02 205100](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/1dbb3b7b-b729-4095-9f18-93d59b9414fe)

11) Now, merge the test_Branch in the main_Branch while merging it will check for the
conflicts if arises then resolve the conflicts and then merge it.
12) By using git diff command we can see the changes.![Screenshot 2024-03-02 205110](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/488ffb06-b089-4da6-9478-8f9684bf041c)

13) Now, open the file (vi exp3.txt) again resolve the conflicts manually and commit it
again.![Screenshot 2024-03-02 205118](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/071e3d47-990e-4197-8f7c-64fd4ae050f3)

13) After resolving the conflicts, push it to the remote repository i.e. (git push origin main).![Screenshot 2024-03-02 205125](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/c01be93a-b57a-4467-959a-d5d5002595a8)

14) After pushing it to remote repository, go to your github account and create a compare and
pull request and merge it from there.![Screenshot 2024-03-02 205557](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/28cfc27b-9be2-4bf4-9869-0a6ab5d9f76d)

15) check for the conflicts and if no conflicts arises it will automatically merge it.![Screenshot 2024-03-02 205605](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/d5a17ad3-0524-4e50-85b6-8026b48ce3b9)

16) the merging was successfully done without any conflicts.![Screenshot 2024-03-02 205613](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/4759bfc1-f70b-4bbf-afe4-8703269a2c98)

17) Now go to your local repository and checkout to the (test_branch) and push the files
form test_branch .![Screenshot 2024-03-02 205620](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/749c8eea-57fb-4938-a23a-ab89daad3ce2)

18) now, you may get the changes in your local repository using (git pull) and check the (git
status) for any left file which was not committed.![Screenshot 2024-03-02 205629](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/818ba258-7d34-42ca-b171-84c4b8bbf273)

19) Now we can see the messages in the file which was done in the main and
test_Branch.![Screenshot 2024-03-02 205636](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/559fedc2-69a7-44a6-8d97-713532b961fb)  
We have successfully created a file and merged in the Main Branch.
### **Learning outcomes (What I have learnt):**
1. Learnt about GitHub.
2. Learnt about Git.
3. Learnt about various git commands that can be applied on Git Bash.
4. Learnt about how push& pull request work.
5. Learnt about how to pull request and push source code /files etc

