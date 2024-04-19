## Experiment no: 07 Git merge Conflicts and resolving git merge conflicts.
**1. Aim/Overview of the practical:** Git merge Conflicts and resolving git merge conflicts.  
**2. Task to be done:** git merge , merge conflicts etc.  
**3. Steps for Experiment: -**  
1). Clone your repository, if already cloned then simply go to your repository by
(cd 22BCD-1).![Screenshot 2024-04-19 142010](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/6d6119f8-d310-44c0-aa1e-b5070e77b457)

2). Now create a new file in the repository by (vi <filename>) and write some content inside
it by the same command.![Screenshot 2024-04-19 142025](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/d7157c91-e04a-4c30-bdd9-bc420817cf09)

3). After creating a file and writing some content inside it then finally add & commit your changes by (git add filename & git commit -m “your_message”).  
![Screenshot 2024-04-19 142037](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/71cddcf6-912f-44b0-8053-494587a05f45)

4). Now create a new branch by (git checkout -b <branch_name>).![Screenshot 2024-04-19 142044](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/afe3c7b2-272c-4f7a-8459-00bbf98827c6)

5). Now open the same file which was created in the main branch i.e. (Exp7.c) and made
some changes inside it by (vi <same_filename>).![Screenshot 2024-04-19 142054](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/240443ec-ca6a-4b0e-826c-d6dbd581f51e)

6). Now add and commit your changes made in the feature_branch by (git add <filename>
& git commit -m “your message”).![Screenshot 2024-04-19 142101](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/193aae84-55a3-41cd-87fe-7ba5f2955219)

7). Now checkout to main branch by (git checkout main). and merge the feature branch by
(git merge --no-ff <branch_name>).![Screenshot 2024-04-19 142107](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/67f622c6-64f4-4810-8783-9f037b600a55)

8). After merging push all the changes to your remote repository by (git push origin main)
and also push the changes from the feature branches. By (git push origin Exp7test).![Screenshot 2024-04-19 142120](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/c16f701a-e7a4-4d06-855d-3cf7604a51db)

9). Now on github made some changes in the same file and add and commit your changes.![Screenshot 2024-04-19 142128](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/a2856ec2-51b8-4280-924e-916976aa3705)

10). Now after commiting the changes go back to main branch and click on open pull request
and see the changes that are made on the github after pushing the file from git to github.![Screenshot 2024-04-19 142134](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/f2e7b6b4-bf89-425c-a18a-d288da9556e2)

11). Now merge your feature branch to the main branch after checking the chances of
conflicts in your file.![Screenshot 2024-04-19 142143](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/9aa84a11-98bc-4415-b408-0ca3310b74af)

We have successfully forked a repository and made the changes.
Learning outcomes (What I have learnt):
1. Learnt about Git.
2. Learnt about GitHub.
3. Learnt about various git commands that can be applied on Git Bash.
4. Learnt about git merge and how you can resolve the conflicts.
