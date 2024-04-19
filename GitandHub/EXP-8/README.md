## Experiment no: 08 Compare the changes in the repository.
**1. Aim/Overview of the practical:** Compare the changes in the repository.   
**2. Task to be done:** git diff, comparing changes etc.  
**3. Steps for Experiment: -**    
1). Create a new repository in your local machine i.e. (mkdir <repo_name>), and go to the created repository by (cd <repo_name>).  
![Screenshot 2024-04-19 143503](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/b03239c9-31be-4a4a-9ead-cba2e9b59eaa)

2). Now initialize a empty repository by (git init) it will contain the .git file and metadata.  ![Screenshot 2024-04-19 143510](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/cf971ef7-6521-4e82-b697-c20d94aa3418)

3). After that create a new file in your repository by (vi <file_name>) and write some content inside the file.
  ![Screenshot 2024-04-19 143515](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/c3c4d630-5801-4052-b203-755be6a95d9b)

4). Now create a new branch by (git branch <branch_name>) and rename the master branch to main by (git branch -m main) and run the (git branch) command to see all the branches.    
![Screenshot 2024-04-19 143521](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/71d79106-937b-423b-b9d7-90a890393032)

5). Now go to the feature_branch by (git checkout <branch_name>) and open the same file which was created in the main branch by (vi <file_name>).  
![Screenshot 2024-04-19 143526](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/e35a8895-97ac-4639-a57f-efab40d8f084)

6). Now do some change in the same file and see the changed content by (cat <file_name>).  
![Screenshot 2024-04-19 143530](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/8073ff90-ce0c-4989-9825-95ccd3f9d6bb)

7). Now checkout to main branch by (git checkout main). run the git diff command to see the changes.  
![Screenshot 2024-04-19 143614](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/f1d17f6f-230d-49f4-8e1c-53bbaa3d18fc)

8). After running (git diff main <feature_branch>) it will show the changes that are made in the file, it will show insertion with ”+” & “green color” and deletion with “-” & “red color”.    
![Screenshot 2024-04-19 143618](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/553156af-e1bd-4bfd-b4e7-7f807566149e)

9). Now add and commit your all the changes by (git add <file_name>) & (git commit -m “messages”).    
![Screenshot 2024-04-19 143624](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/2c7a9696-c5fe-4252-b774-a47d5e864906)

We have successfully forked a repository and made the changes.
Learning outcomes (What I have learnt):
1. Learnt about Git.
2. Learnt about GitHub.
3. Learnt about various git commands that can be applied on Git Bash.
4. Learnt about git diff and how we can see the changes.
