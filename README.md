# Hamilton Activity

A-L-E-X-A-N-D,
C++ and PHP!

## Setup
Open your CLI and log into the server:
`ssh netid@w3.uvm.edu` where `netid` is your UVM netid

This will prompt for your password. Note that it will look like you are not typing, because the CLI doesn't show the number of characters in your password (how safe!).

Note that once you are logged into the server, you will use Linux CLI commands.

Change directory (`cd`) to get into the `www-root` folder.

Clone the repository:
`git clone https://github.com/UVMCS120F2020/Hamilton-Activity.git`

Now you can view the website at `netid.w3.uvm.edu/Hamilton-Activity/hamilton.html` where `netid` is your UVM netid. Keep this up in a browser, because it is how you will see the changes you make to the website.

Back in your CLI, change the directory (`cd`) to get into the newly created Hamilton-Activity folder.

Create a git branch and check it out:
`git checkout -b netid` where `netid` is your UVM netid

Here is where you will work on the activity:
* `ls` to list the files in the folder
* `git status`, `git add`, `git commit`, and `git push` to update your branch
* To edit the files, you have two options:
    * Use Filezilla, Fugu, WinSCP, and/or scp to transfer the files between the server and your local machine. Edit the files locally in the text editor of your choice and transfer the updated files to the server to see the changes on the website.
    * Update the files on the server using vim:
        * Open the file: `vi hamilton.cpp` (you can substitute with whichever file you want to look at or update)
        * Click `i` to go into insert mode (you should see `-- INSERT -- on the bottom of the window)
        * Use the arrow keys to move the cursor and use the keyboard per usual to make edits to the file
        * Click the escape key to exit insert mode (the `-- INSERT --` on the bottom of the window should disappear)
        * Write `:wq` to write/save and quit/exit.
            * If you want to exit without saving your changes, you can use the command `:q!`
        * Now you are back to the Hamilton-Activity folder.

Note: Once you are finished being on the server, use the `logout` command to return to your local directory.

## Starter Code
Play around on the website to see what is provided for you. Then take a look through the files to familiarize yourself with them.

## Your Task
You get to add to the website to make it more robust. Below are suggestions, but you can always add something outside of this list if you are feeling creative.
1. Add a dropdown menu to the `html` file to give the user the options to:
* Count the letters in the lyrics (which will perform the starter code).
* Give the top twenty most frequently used words in the song (in order from most used to least).
* List the characters who have lines in the song and order them from most number of lines to least.
* List the characters who have lines in the song and order them from most number of *words* to least (Will the ordering be different from the previous bullet point? I doubt it, but you never know!).
* Only print Hamilton's lines from the song, and count the number of times he says `I`.
2. Use Python to create a bar graph of the data collected and display the image using the html `img` tag along with the table.
3. Embed the YouTube video of the song in the webpage (hint: go to a YouTube video, click `Share`, and then `Embed`).
4. Add more Hamilton song options (I only provided the first 11 songs from the play).
5. Add a dropdown menu of options that will look at all the song lyrics:
* Count the number of words in each song.
    * Store the length of each song and calculate the number of words spoken per second.
* Choose a character and display the number of words or lines that they have in each song.
* Find out who says the longest words (overall, and on average).
* Find the most repeated word out of all the songs combined.
* Choose a lyric that appears in multiple songs and display which songs it appears in (and how many times).

You do not need to complete the items in this order, so choose whichever part sounds the most intriguing and have fun with it!

As always, I will be around to help you. Don't hesitate to ask when you have a question.
