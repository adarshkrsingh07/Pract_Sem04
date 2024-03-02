## Experiment no- 01 Install Git and creating repository.  
<span style="color:green">**1. Aim/Overview of the practical:**</span>
Here is some <span style="color:blue">blue text</span>.


**1. Aim/Overview of the practical:** Install Git and creating repository.  
**2. Task to be done:** Download Git for Windows. And, to make repositories.  
**3. Steps for experiment:-**
1) Go to the official Git website: https://git-scm.com/downloads.
2) Click thedownload link for Windows and allow the download to complete.
3) Browse to the download location (or use the download shortcut in your browser). Doubleclick the file to extract andlaunch the installer.
4) Allow the app to make changes to your device by clicking Yes on the User Account Control dialog
that opens.
5)The installer will ask you for an installation location. Leave the default, unless you have
 reason to change it, andclick Next.
6)The installer will offer to create a start menu folder. Simply click Next.
7)Select a text editor you’d like to use with Git. Use the drop-down menu to select Notepad++
(or whichever text editoryou prefer) and click Next.
8) The next step allows you to choose a different name for your initial branch. The default
is 'master.' Unless you'reworking in a team that requires a different name, leave the default
option and click Next.
9) Choose the terminal emulator you want to use. The default MinTTY is recommended,
for its features. Click Next.
10)The installer now asks what the git pull command should do. The default option is
recommended unless youspecifically need to change its behavior. Click Next to
continue with the installation.
11) Next you should choose which credential helper to use. Git uses credential helpers to
fetch or save credentials. Leavethe default option as it is the most stable one, and click Next.
12) Depending on the version of Git you’re installing, it may offer to install experimental
features. At the time this article was written, the options to include support for pseudo controls
and a built-in file system monitor were offered. Unless you are feeling adventurous, leave them
unchecked and click Install.
13) Once the installation is complete, tick the boxes to view the Release Notes or Launch Git Bash,then click Finish.
How to Launch Git in Windows
• Git has two modes of use – a bash scripting shell (or command line) and a
graphical user interface (GUI). To launch Git GUI open the Windows Start
• menu, type git gui and press Enter (or click the application icon).Connecting to
a Remote Repository
• You need a GitHub username and password for this next step.
Create a Test Directory
• Create a new test directory (folder) by entering the following:
 mkdir first_git
• Change your location to the newly
created directory:cd first_git
Note: If you already have a GitHub repository, use the name of that project instead of first_git
Configure GitHub Credentials
Configure your local Git installation to use your GitHub credentials by
entering the following:git config --global user.name "github_username"
git config --global user.email "email_address"
Note: Replace github_username and email_address with your GitHub credentials.
We can also see the list of configurations by using the command git config – list.
Clone a GitHub Repository
Go to your repository on GitHub. In the top right above the list of files, open the Clone or
download drop-down menu.Copy the URL for cloning over HTTPS.
Switch to your PowerShell window, and enter the following:
git clone repository_url
List Remote Repositories
Your working directory should now have a copy of the repository from GitHub. It should
contain a directory withthe name of the project. Change to the directory:
cd first_git or 22BCD-1
Once you’re in the sub-directory, list the remote
repositories:git remote -v
Enter the details in the current file
You can enter the desired details into your current file by the following commands:
Cat > first_git
Enter the details in
the filePress
Cntrl+D
Then, you can see the entered details through the command :- Cat first_git
Creating Repository on GitHub
1. After successful login into your account. Click on the option (+) to add new repository to your account.
2. After clicking new repository option, we will have to initialize some things like, naming
our project, choosingthe visibility etc. After performing these steps click Create
Repository button.

3. After clicking the button, we will be directed to below page. Right now the only file we have is
a readme file.
4. Now click on the “Upload files” button. Do some needed steps. Now we can see
 all the files in our github.
We have successfully created a repository and applied some commands on that.  
**Learning outcomes (What I have learnt):**  
1. Learnt about GitHub.
2. Learnt about Git.
3. Learnt about various git commands that can be applied on Git Bash.
4. Learnt about how to create repositories.
5. Learnt about how to pull request and push source code /files etc.
