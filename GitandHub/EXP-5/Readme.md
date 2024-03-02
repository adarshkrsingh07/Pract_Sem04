## Experiment no - 05 To Merge pull request and update local repository on GitHub.
**1. Aim/Overview of the practical:** To Merge pull request and update local repository on GitHub.  
**2. Task to be done:** Creation local repository, create files, push and pull operations.  
**3. Steps for Experiment: -**  
1) Create a repository on local machine or clone a already created repository.  ![Screenshot 2024-03-02 220054](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/814e3d55-f5b5-4052-87cc-249705923714)

2) Now go to your repository by (cd <repo_name>) and run (ls) command to check for the files.  ![Screenshot 2024-03-02 220106](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/0a9dbb26-cf85-407d-b1f0-a3e85724d64e)

3) Now create a new file in your repository i.e. (vi Exp05.txt) and add some content inside the file, and also check for the data inside the file i.e. (cat <file_name>).  ![Screenshot 2024-03-02 220116](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/e0a09509-138a-4830-b734-c13a6b0865c9)

4) Now after adding some content inside the file, add & commit the file. i.e. (git add .) & (git commit -m “your message”).  ![Screenshot 2024-03-02 220126](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/a524a86c-a7aa-46de-b813-eebf520595ca)

05) Now before creating a new feature_branch from the main branch i.e. (git checkout -b <branch_name>), check for already created branch i.e. (git branch) i.e. (experiment5).  ![Screenshot 2024-03-02 220132](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/949ba246-a815-47e4-af37-73175238911f)

06) After creating a feature_branch open the same file which was created on the main_branch (vi Exp05.txt) and make some changes in the feature_branch.  ![Screenshot 2024-03-02 220142](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/85c92cfc-ff19-4972-a313-f54ab76cf065)

07) Now after making change in the same file, add & commit the file in the feature_branch. i.e. (git add .) & (git commit -m “your message”).  
![Screenshot 2024-03-02 220155](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/0c01fa1c-8dc7-4bf9-8e0c-230763c996fc)  

08) Now we can see the changes made in the feature_branch i.e. (git diff main <feature_branch>).  ![Screenshot 2024-03-02 220203](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/39e3c669-0621-484f-b85e-2e1c85d96033)

09) Now merge the feature_branch into the main branch i.e. (git merge <feature_branch>).  ![Screenshot 2024-03-02 220211](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/4064e3d2-d5a0-4b50-a756-d647bc14eccf)

10) Now we can see the changes done in the feature_branch after merging it to main branch i.e. (cat <file_name>).  ![Screenshot 2024-03-02 220217](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/64ff99f6-ea1d-4389-bbb8-7884e29b4e58)

11) Now push all the changes on the GitHub in the main branch i.e. (git push origin main).  ![Screenshot 2024-03-02 220228](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/ffc35e2a-94ce-4ae6-ac76-f13dfd2be2bf)

12) Now go to the feature_branch and open the same file and make some changes.  ![Screenshot 2024-03-02 220237](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/ed6b4d15-d1cb-4724-9e76-897ca17ae2b4)

13) Now open the same file and make some changes and commit the changes.  ![Screenshot 2024-03-02 220250](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/45a4475a-9fd7-46ee-bc1e-ebda0e055b4f)

14) Now we can see the changes made on the GitHub.  ![Screenshot 2024-03-02 220256](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/7989653a-7349-422f-824a-a5004c7d5192)

12) Now go to your GitHub account and open a pull request.   ![Screenshot 2024-03-02 220306](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/2c125056-da11-430d-a197-61681ba162b2)

13) Now merge pull request before merging it will check for the conflicts.  ![Screenshot 2024-03-02 220313](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/29a429b6-0511-4a37-9109-8028b672580b)

14) Now the branch and the files are successfully merged.  ![Screenshot 2024-03-02 220321](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/8cb05a58-8c1b-4bc8-977a-83d2a25349e5)

15) Now on the local repository we can also see the changes made on the Git and Github.  ![Screenshot 2024-03-02 220328](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/b0aea73d-0cd9-4fb9-8362-06dd0cffdebc)

We have successfully created a file and merged in the Main Branch.  
### **Learning outcomes (What I have learnt):**
1. Learnt about GitHub.
2. Learnt about Git.
3. Learnt about various git commands that can be applied on Git Bash.
4. Learnt about push and pull merge request.
