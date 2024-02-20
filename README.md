# Root_granter
Dont forget to change IP in payload.sh Before using this payload don't forget to start netcat listeners on port 4444 and 1337 Because it gives both user shell and root shell and Put the sh script in a server which can be accessed from online.

When the device executes payload in a machine wich can be linux or mac, it will download the payload.sh from server then executes it and removes the payload.sh.

Once the payload.sh is executed as explained in the sudo_backdoor script it will gets the root credential instead of storing it it will used for getting higher privileges and gives a reverse root netcat connection. Additionaly i have added a user level netcat connection also.

The reason for two netcat connection is user level connection established when script is executed. But to obtain root credenitals it requires time because the user need elevate his privileges to root.
