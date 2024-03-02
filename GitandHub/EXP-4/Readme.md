## Experiment no - 04 Editing a file and committing changes on GitHub.  
**1. Aim/Overview of the practical:** Editing a file and committing changes on GitHub.  
**2. Task to be done:** Creating a file in your remote repository and pulling it to local repository and doing some changes into the file and again pushing it on the GitHub.  
**3. Software Used:** Git Bash, GitHub.  
**4. Steps for Experiment: -**  
1) Goto your remote repository i.e. (Github.com) now create a new repository over there i.e. (Git_Exp4).  ![Screenshot 2024-03-02 210758](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/918105b6-2638-4ce4-9849-b0f9568e6089)

2) Now clone your remote repository on the local repository by copying the link from GitHub.  ![Screenshot 2024-03-02 210806](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/7735a19c-22b1-448b-8d67-eca781d7f57e)

3) Now open git bash and clone your repository i.e. (git clone <link>).  ![Screenshot 2024-03-02 210855](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/c75e8466-e6a8-4c27-b4fd-715bb04430ac)

4) Now go to your repository by (cd <repo_name>).  ![Screenshot 2024-03-02 210905](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/86245449-4d4c-4197-bace-b8d3da9241e1)

5) Now check for the other file if already present pr created (ls). If not then create a file in your current repository by (vi <file_name>.  ![Screenshot 2024-03-02 210922](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/a7ffe5a4-8caf-4c8d-a44d-75969814e51f)


6) After creating a file now write something in it by (vi <file_name>).  ![Screenshot 2024-03-02 210927](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/92dc0a46-8938-4721-85bd-fb6c267ec6a3)

7) Now add and commit your file so that it can be tracked and pushed easily on GitHub, i.e.(git add . & git commit -m).  ![Screenshot 2024-03-02 210933](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/08bce7b4-84ed-49ea-b05f-39ab172bdb5c)

8) Now check for status so that no file will be left for adding or committing , i.e.(git status).  ![Screenshot 2024-03-02 210944](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/bab914e2-87da-4a66-9223-a2551dafd2cb)

9) After committing the file now push it on the GitHub i.e. (git push origin main).    ![Screenshot 2024-03-02 210951](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/176ae7d8-987f-4677-b556-b2254cd07b49)

10) Now go to the GitHub and open the pushed file and make some changes over there and commit the changes successfully. ![Screenshot 2024-03-02 210957](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/070fcf37-f1ad-4a92-ab4c-77bc12a0a65e)
 
11) Now we use git pull to fetch the content from github to git i.e.(remote to local) by (git pull origin main).  ![Screenshot 2024-03-02 211003](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/0375ac66-306f-46f1-a8df-c20ae8f734a6)

12) After pulling the content from remote to local repository now see the changes made over there by using (cat <file_name>).  ![Screenshot 2024-03-02 211007](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/1d7f712e-aeff-4d07-87ae-e78884e7b11d)

13) Now we can run a git log commands to see the commits. (git log).  ![Screenshot 2024-03-02 211016](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/9b666106-127e-4064-94ba-1feefacde2cd)   
We have successfully created a file and merged in the Main Branch.  
### **Learning outcomes (What I have learnt):**
1. Learnt about GitHub.
2. Learnt about Git.
3. Learnt about various git commands that can be applied on Git Bash.
4. Learnt about how to make changes in a file in git and how to push it on github.
5. Learnt about how to pull request and push source code /files etc.
