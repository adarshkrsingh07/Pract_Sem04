## Experiment no- 02 Creating Branches with GitHub.
**1. Aim/Overview of the practical:** Creating Branches with GitHub.  
**2. Task to be done:** Creation of branches, Merging of branches and Deletion of branches.  
**3. Steps for Experiment: -**  
1) On GitHub.com, go to your account navigate to the main page of the repository i.e.(22BCD-1).  
2) From your repository click on the file tree view on the left, select the branch dropdown menu, then click on Main.  
3) Apart from this, by clicking on View All Branches you can see all the branches created.  
4) So, by default you will be in Main branch (default branch).  
5) Now, click on Add File... Select "Create new file" option.    
   ![Screenshot 2024-03-02 163617](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/2c08d8b0-137d-4ef0-9852-224a0b3e6af8)    
6) After clicking on “Create new file” Enter your file name i.e. (Add.c).  
  ![Screenshot 2024-03-02 163623](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/142dfd15-b4ad-4ed3-9133-c99461389da9)  
7) The (Add.c) file is created in the “Main branch”, now write a simple code for adding two numbers in your file.    
![Screenshot 2024-03-02 163641](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/a161e563-72dd-4612-a007-e683cafeaf10)    
8) So, now we have to create another branch from “Main branch” i.e. (Feature_Branch).    
9) In the "Find or create a branch..." text field, type a unique name for your new branch, then click Create branch i.e.(test_Branch).    
![Screenshot 2024-03-02 163925](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/b80cac18-60b5-4391-9974-c3678287fdbc)      
10) After Creating a Feature branch from the “Main branch”, now in the Feature branch we have to do some changes in the (Add.c) file which was created in the main branch.    
![Screenshot 2024-03-02 163945](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/3611da1e-d834-4f7b-9af3-8e76b4c0cc89)      
11) In the Main Branch file the variables are (num1, num2,sum) and now in feature branch after some changes the variables are (num,num2,sum).    
12) Now go to “Main branch” a compare and pull request notification is reflected.    
![Screenshot 2024-03-02 164003](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/8e669ac3-bbfe-4de5-a9c6-404ce2a9c049)      
13) Now click on the Compare & Pull request.    
14) After clicking on Compare and Pull Request, it will be visible what changes have been made in the feature branch.    
![Screenshot 2024-03-02 164025](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/25f7c38f-164a-4ed7-99a1-ad50d2373f31)    
15) 1Now compare the changes in the file, after comparison it will show whether the file is able to be merged or there are some conflicts.    
![Screenshot 2024-03-02 164042](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/0b24c529-d3c1-43f3-88b1-4cdb53db70c5)      
16) Now click on create pull request after that the files will be merge if there was no conflict occur in the branches. The Branch is successfully Merged without any conflicts.  
![Screenshot 2024-03-02 164103](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/05159715-54bb-4dba-9924-9240cea9e9aa)  
### Creating a Branch on Bash/GUI: -  
• To Change the directory a branch: touch <File1>  
![Screenshot 2024-03-02 164721](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/ae361560-5523-4a05-814e-413ddbc105f2)  
• To Create a file: touch <File1>    
![Screenshot 2024-03-02 164732](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/ecf31e6f-6279-4176-a8ba-40ebdf9e964a)  
• After creating a file in the “Main Branch” check for “git status” and add the file in “git add File1”.      
![Screenshot 2024-03-02 164740](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/b52e1146-926f-4a23-82b5-8b6f68b4885c)    
• After Creating a file now enter your message: vi File1, after that check “git status” it will show that the File1 is modified.  
![Screenshot 2024-03-02 164750](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/2cc3317b-0d95-49e5-9d9c-78d711a58b6e)  
• Now create a Feature_branch from the main branch i.e.(testBranch).  
![Screenshot 2024-03-02 164755](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/910b114d-d180-48eb-9692-ad2e95eeeab1)

• Now open the same file by vi File1.txt in the “testBranch” and perform some changes on it.  
• Now Commit the changes in main branch of file i.e.(testFile).
• After creating a file in the “Main branch” and also commiting it. after, that we
have to merge the (testfile) of “feature_branch” in the Main branch.
• After merging the branches now we have to delete the branches: “git branch –
delete “branch_name”
We have successfully created a file and merged in the Main Branch.
Learning outcomes (What I have learnt):
1. Learnt about GitHub.
2. Learnt about Git.
3. Learnt about various git commands that can be applied on Git Bash.
4. Learnt about how to create repositories.
