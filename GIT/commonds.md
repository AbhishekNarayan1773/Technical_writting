Complete Git Commands Reference

Subject: Technical Writing
Name: Abhishek Narayan Hathwala
Student ID: 2025UCP1029
Institute: MNIT Jaipur

⸻

1. Git Installation and Configuration

Command	Description
git --version	Check Git version
git config --list	Display all Git configurations
git config --global user.name "Name"	Set global username
git config --global user.email "email"	Set global email
git config user.name	Display configured username
git config user.email	Display configured email
git config --global --edit	Edit global configuration
git help	Display Git help
git help <command>	Display help for a command

2. Repository Creation and Management

Command	Description
git init	Initialize a new repository
git init <directory>	Initialize a repository in a directory
git clone <URL>	Clone a remote repository
git clone <URL> <directory>	Clone into a specific directory
git status	Display repository status
git status -s	Display short status
git rev-parse --show-toplevel	Show repository root directory
git rev-parse --is-inside-work-tree	Check whether inside a Git repository

3. Adding and Staging Files

Command	Description
git add <file>	Stage a specific file
git add .	Stage changes in the current directory
git add -A	Stage all changes in the repository
git add *.txt	Stage matching text files
git add -p	Interactively stage selected changes
git rm <file>	Remove a file and stage its deletion
git rm --cached <file>	Stop tracking a file but keep it locally
git mv <old> <new>	Rename or move a tracked file

4. Commit Commands

Command	Description
git commit -m "message"	Create a commit
git commit	Create a commit using the configured editor
git commit -a -m "message"	Stage tracked modifications and commit
git commit --amend	Modify the previous commit
git commit --amend -m "message"	Change the previous commit message
git commit --allow-empty -m "message"	Create an empty commit
git show	Display the latest commit details
git show <commit-id>	Display a specific commit

5. Viewing Commit History

Command	Description
git log	Display commit history
git log --oneline	Display compact commit history
git log --all	Display history of all branches
git log --graph	Display commit history as a graph
git log --oneline --graph --all	Display compact graphical history
git log -n 5	Display the latest five commits
git log --author="Name"	Filter commits by author
git log --since="1 week ago"	Display recent commits
git log --stat	Display file change statistics
git log --name-only	Display changed filenames
git reflog	Display local reference history

6. Comparing Changes

Command	Description
git diff	Compare working directory with staging area
git diff --staged	Compare staged changes with last commit
git diff HEAD	Compare working directory with last commit
git diff <branch1> <branch2>	Compare two branches
git diff <commit1> <commit2>	Compare two commits
git diff --name-only	Display names of changed files
git diff --stat	Display change statistics

7. Branch Management

Command	Description
git branch	List local branches
git branch -a	List local and remote branches
git branch -r	List remote branches
git branch <name>	Create a new branch
git switch <name>	Switch to another branch
git switch -c <name>	Create and switch to a new branch
git checkout <name>	Switch branches
git checkout -b <name>	Create and switch branches
git branch -m <new-name>	Rename the current branch
git branch -d <name>	Delete a merged branch
git branch -D <name>	Force-delete a branch
git branch -vv	Display branches with tracking information
git merge <branch>	Merge another branch into the current branch

8. Merge and Rebase

Command	Description
git merge <branch>	Merge a branch
git merge --no-ff <branch>	Create a merge commit even when fast-forward is possible
git merge --abort	Abort an ongoing merge
git merge --continue	Continue a merge after resolving conflicts
git rebase <branch>	Reapply commits on top of another branch
git rebase -i HEAD~3	Interactively edit the last three commits
git rebase --continue	Continue a rebase
git rebase --abort	Abort a rebase
git rebase --skip	Skip the current commit during rebase

9. Remote Repository Commands

Command	Description
git remote	List remote names
git remote -v	Display remote URLs
git remote add origin <URL>	Add a remote repository
git remote remove origin	Remove a remote
git remote rename <old> <new>	Rename a remote
git remote set-url origin <URL>	Change remote URL
git remote show origin	Display remote details
git fetch	Download remote updates
git fetch origin	Fetch from origin
git fetch --all	Fetch from all remotes
git pull	Fetch and integrate remote changes
git pull origin main	Pull changes from the main branch
git push	Upload local commits
git push origin main	Push the main branch
git push -u origin main	Push and set upstream tracking
git push --all	Push all local branches
git push origin --tags	Push all tags
git push origin --delete <branch>	Delete a remote branch

10. Undoing and Restoring Changes

Command	Description
git restore <file>	Discard unstaged changes in a file
git restore --staged <file>	Unstage a file
git reset	Unstage staged changes
git reset --soft HEAD~1	Undo last commit but keep changes staged
git reset --mixed HEAD~1	Undo last commit and unstage changes
git reset --hard HEAD~1	Reset to previous commit and discard changes
git revert <commit-id>	Create a commit that reverses another commit
git clean -n	Preview untracked files to be removed
git clean -f	Remove untracked files
git clean -fd	Remove untracked files and directories

Warning: git reset --hard and git clean -f can permanently discard work. Use them carefully.

11. Stashing Commands

Command	Description
git stash	Temporarily save working changes
git stash push -m "message"	Save changes with a description
git stash list	List saved stashes
git stash show	Show the latest stash summary
git stash show -p	Show detailed stash changes
git stash apply	Apply the latest stash
git stash apply stash@{0}	Apply a specific stash
git stash pop	Apply and remove the latest stash
git stash drop	Delete the latest stash
git stash clear	Delete all stashes

12. Tag Commands

Command	Description
git tag	List tags
git tag <name>	Create a lightweight tag
git tag -a <name> -m "message"	Create an annotated tag
git show <tag>	Display tag information
git tag -d <name>	Delete a local tag
git push origin <tag>	Push a specific tag
git push origin --tags	Push all tags
git push origin --delete <tag>	Delete a remote tag

13. File and Commit Information

Command	Description
git show HEAD	Display latest commit
git show HEAD~1	Display previous commit
git blame <file>	Show who last modified each line
git ls-files	List tracked files
git ls-tree HEAD	Display files in a commit
git check-ignore <file>	Check whether a file is ignored
git archive --format=zip HEAD -o project.zip	Create a ZIP archive of a commit

14. Git Ignore Commands

A .gitignore file specifies files and directories that Git should ignore.

Example .gitignore:

# Compiled files
*.class
*.o
# Environment files
.env
# Dependencies
node_modules/
# Python cache
__pycache__/
# System files
.DS_Store
# Build directories
build/
dist/

Useful commands:

git status --ignored
git check-ignore -v <file>

15. Useful Advanced Commands

Command	Description
git cherry-pick <commit-id>	Apply a specific commit to the current branch
git bisect start	Start binary search for a bug
git bisect good	Mark a commit as good
git bisect bad	Mark a commit as bad
git bisect reset	End the bisect session
git submodule add <URL>	Add a submodule
git submodule update --init --recursive	Initialize and update submodules
git archive HEAD	Create an archive of the repository
git gc	Clean up repository storage
git fsck	Check repository integrity
git count-objects -v	Display repository object statistics

16. Complete Git Workflow Example

The following commands demonstrate a typical Git workflow:

# Configure Git
git config --global user.name "Abhishek Narayan Hathwala"
git config --global user.email "your-email@example.com"
# Create project directory
mkdir MyProject
cd MyProject
# Initialize repository
git init
# Create a file
echo "# My Project" > README.md
# Check status
git status
# Stage file
git add README.md
# Commit changes
git commit -m "Initial commit"
# Create a branch
git switch -c feature
# Make changes
echo "Learning Git" >> README.md
# Stage and commit
git add .
git commit -m "Added project description"
# Return to main branch
git switch main
# Merge feature branch
git merge feature
# Add remote repository
git remote add origin https://github.com/username/MyProject.git
# Push to GitHub
git push -u origin main

17. Important Git Terminology

Term	Meaning
Repository	Storage location for a project and its history
Working Directory	Current project files being edited
Staging Area	Area containing changes prepared for commit
Commit	A recorded snapshot of changes
Branch	An independent line of development
Merge	Combining changes from different branches
Clone	Copying a remote repository
Fork	Creating your own copy of another GitHub repository
Remote	A reference to a repository hosted elsewhere
HEAD	Reference to the currently checked-out commit
Merge Conflict	A situation where Git cannot automatically combine changes
Tag	A named reference to a specific commit
Stash	Temporary storage for uncommitted changes

Conclusion

Git provides a powerful set of commands for version control, collaboration, and project management. This reference covers basic, intermediate, and advanced Git commands required for practical software development and repository management.

⸻

Prepared by: Abhishek Narayan Hathwala
Student ID: 2025UCP1029
Department: Computer Science and Engineering
Institute: MNIT Jaipur