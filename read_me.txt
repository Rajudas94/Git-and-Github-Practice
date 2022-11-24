How to create a new repository on the command line
echo "# Git-and-Github-Practice" >> README.md (>> means redirection with changes)
git init
git add README.md
git commit -m "first commit"
git branch -M main
git remote add origin https://github.com/Rajudas94/Git-and-Github-Practice.git
git push -u origin main

How to push an existing repository from the command line
git remote add origin https://github.com/Rajudas94/Git-and-Github-Practice.git
git branch -M main
git push -u origin main
