## Experiment no: 10 Work with your history in git.
**1. Aim/Overview of the practical:** work with your history in git.  
**2. Task to be done:** git histories etc.  
**3. Steps for Experiment: -**   
1). Create a new repository in your local machine i.e. (mkdir <repo_name>), or go to the already created repository by (cd <repo_name>).  

![Screenshot 2024-04-19 145826](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/7ddc4346-92d5-4a8a-ad6e-dc27448a3755)

2). Now initialize a empty repository by (git init).

![Screenshot 2024-04-19 145832](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/a37a9e71-0e03-4602-8caf-6ea4dbc02795)

3). After that create a file and do 3 commits and add and commit the changes (vi<file_name> & git add . & git commit -m “your_message”). 

![Screenshot 2024-04-19 145844](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/56c33834-14a8-4f1f-a5bc-b2489bcc0ed1)
![Screenshot 2024-04-19 145838](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/aed3c063-ead4-47f3-a037-1e8fe33593c6)

4). Now let’s execute amend by (git commit --amend).

![Screenshot 2024-04-19 145849](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/6c8f6e73-f6d4-479e-9904-b2f82638369c)

5). Now execute git rebase to change the multiple commits by (git rebase -i HEAD~2). 

![Screenshot 2024-04-19 145905](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/4397ca2f-1325-4b43-afbc-8358fafeb112)
![Screenshot 2024-04-19 145858](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/e8f9073e-b028-48fe-bc12-e97ba45632e7)

6). Now reset the head by (git reset HEAD^).

![Screenshot 2024-04-19 145912](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/72bfe44d-b901-4350-8a93-cd3bc8ef8dde)

7). Now add and commit your all the changes that you have made.

![Screenshot 2024-04-19 145916](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/ec291bc2-e999-4874-ab27-fc152e07bd4e)

8). Now execute git log by (git log –pretty=format: %h -%s).

![Screenshot 2024-04-19 145919](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/123236e8-861e-43b0-97d5-d0938773fd48)

Learning outcomes (What I have learnt):
1. Learnt about Git.
2. Learnt about GitHub.
3. Learnt about various git histories commands that can be applied on Git Bash.
4. Learnt about git reset, amend, log, pretty.
