## Experiment no - 06 Creation of forks on GitHub.
**1. Aim/Overview of the practical:** Creation of forks on GitHub.  
**2. Task to be done:** Fork a repository on GitHub, create files, push and pull operations and git clone.  
**3. Steps for Experiment: - **  
1). Go to your GitHub account and on search bar of your profile, search for the repository that you want to fork i.e. (Krishna8167/FileManip).  ![Screenshot 2024-03-06 212952](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/79b7eed4-e457-4b21-956a-b64ffa75d3b0)  
2). Now click on the fork button which is on the right side of the repository.   
3). Change the name accordingly or leave it as default and also configure if you want to copy contents of main branch only or not.    
4). Description is optional, now click on the create fork option. Now the repository is successfully forked in your account.   ![Screenshot 2024-03-06 213333](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/9f056e8a-f05b-4736-b409-94672738aa73)  
5). Now clone the forked repository on your local machine i.e. Git. Copy the https link of the forked repository from the GitHub. i.e. (git clone https://adarshkrsingh07/FileManip.git).  ![Screenshot 2024-03-06 214619](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/e2a682ee-46bf-4163-bb9d-bb673a3c1e13)  
6). Now go to your forked repository by cd <repo_name> and run the ls command to check for files which is already present in the repository.  ![Screenshot 2024-03-06 214631](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/b98e0f32-7276-4ec0-9356-818386c6e1bf)  
7). Now create a file new file i.e. (vi Exp06.txt) and write something in it. We can also see the content of the file by (cat <file_name>).  ![Screenshot 2024-03-06 214642](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/5abc6792-656d-4d32-b077-2b931776576e)  
8). After writing in the file in the end add and commit your file i.e. (git add . & git commit -m “your_message”).  ![Screenshot 2024-03-06 214707](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/e167adb1-3834-41e5-bbce-926bfb25666f)    
![Screenshot 2024-03-06 214700](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/e29d619f-824e-4d67-8e42-aae2fbfa967f)  
9). Now push all the changes which is done on your local machine, by (git push origin main).  ![Screenshot 2024-03-06 214716](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/4b291db9-f58a-4bdc-a39c-c31b782b5eb9)  
10). Now go to your GitHub account and see the changes that are made from the local machine.  ![Screenshot 2024-03-06 214007](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/7315a2eb-e6b0-47f6-a0cd-881c85696999)  
11). Now you can also make some changes in the same file on GitHub.  ![Screenshot 2024-03-06 215726](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/c1760fc2-ab88-4fbd-b91f-234d61a3ec83)  
12). You can now pull the repository to your local repository so you can see the changes made on GitHub. By (git pull origin main).  ![Screenshot 2024-03-06 214725](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/bae53deb-837b-4659-89b1-9363ae470240)  
13). To see the changes made on GitHub you can run (cat <filename>).  ![Screenshot 2024-03-06 214734](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/468372fa-0c1a-4b44-8c85-74a13277eb0a)  
14). You can see the log to see the commit history. i.e. (git log -n ) to see the no of commit.  ![Screenshot 2024-03-06 214753](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/484d572e-addc-4d3a-bae5-e40544907b35)  
We have successfully forked a repository and made the changes.  
### Learning outcomes (What I have learnt):
1.	Learnt about Git.
2.	Learnt about GitHub.
3.	Learnt about various git commands that can be applied on Git Bash.
4.	Learnt about fork and how you can clone your forked repository on git.

