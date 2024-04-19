## Experiment no: 09 Understanding the various reset modes.
**1. Aim/Overview of the practical:** Understanding the various reset modes.  
**2. Task to be done:** git reset, different reset modes etc.  
**3. Steps for Experiment: -**  
1). Create a new repository in your local machine i.e. (mkdir <repo_name>), or go to the already created repository by (cd <repo_name>). 

![Screenshot 2024-04-19 144914](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/477a9b1f-2ce6-40f5-9a76-fd61a7f8a766)

2). Now create a new file by (vi <file_name>) and some content inside it.  

![Screenshot 2024-04-19 144918](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/80731e77-ef37-451e-9b78-3322bf644611)

3). After that now add and commit your changes by (git add . & git commit -m “your message).  

![Screenshot 2024-04-19 144925](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/9aa9fa2e-e902-4121-bbeb-a0d909662714)

4). Now again made some changes in the file by (vi <file_name>).  

![Screenshot 2024-04-19 144929](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/262cb823-a7f5-4a9d-a1e9-0aab54e8dbb2)

5). Now check the status of the file it will show modified by (git status).  

![Screenshot 2024-04-19 144935](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/d8d1c31e-ab92-4bca-b5a1-2fe7da5287f5)

6). Now add and commit your second changes which was done in the file by (git add . & git commit -m “your message”).

![Screenshot 2024-04-19 144941](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/6d2d6674-84a1-4e78-9d11-59d6addc303a)

7). Now check the histories by (git log).  

![Screenshot 2024-04-19 144948](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/3c1ca0d9-906b-436e-a9fb-097cef15d197)

8). Now do some reset commands firstly execute soft reset by (git reset --soft hashcode) it will move the file to the index/staging area and check the git status.
  
![Screenshot 2024-04-19 144954](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/f6d4a4d3-e7be-438a-9f94-8aba597d2616)

9). Now execute mixed reset by (git reset –mixed hashcode) it will move the file form repository to the working directory. 

![Screenshot 2024-04-19 145001](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/6de6f6d4-f73b-40d0-85a8-12d7a3e88c09)

10). Now execute hard reset by (git reset –hard hashcode) it will remove the file form all the stages i.e. repository,staging and working directory.

![Screenshot 2024-04-19 145007](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/1c6b1da9-4d7d-4240-a1d1-c15833ff8708)

Learning outcomes (What I have learnt):
1. Learnt about Git.
2. Learnt about GitHub.
3. Learnt about various git reset commands that can be applied on Git Bash.
4. Learnt about git reset modes.

