# Password-Generator
For all your anxious "What if?" needs. As long as you're smart with this and don't use the same password for every service, if that service happened to have a data breach, your other accounts will be safe. From that point on, it's your choice to save that account or not.
## Why should I need this?
Well it depends. Do you have an account for a paid service? Do you want it to be hacked? Or perhaps you have one for a popular game, and you don't want it getting stolen? That's why this is here. I have used this for years, all my accounts are perfectly safe due to this tool. However, if there's a choice, you should also **enable 2FA if possible**.
## How can I use this?
### For Linux users
Just type `apt install xclip` in the terminal. If you're not using apt, replace it with what package manager you're using. Then you're done, if you haven't downloaded the source but downloaded the prebuilt app, type `./root` to run it.
### For Windows users
Currently, since this is a Linux based application, you should install [Cygwin](https://www.cygwin.com). Afterwards, you should just install the G++ package so that you can actually compile this to run it.
You also require XCLIP. It's a library for copying and pasting to the clipboard.
Once you have managed to install those two libraries, add Cygwin's bin directory to PATH.
Now you are able to actually compile the program. Go to the directory where you had installed the program, and right click on the empty space within the directory, open in terminal or CMD. 
Type `g++ passgen.cpp -o root` and then watch it work it's magic. Now you're able to run it. Congratulations, and enjoy a safe trip on the internet.
