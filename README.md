# CredInject
Hello Dear Reader!

Welcome to the CredInject repo -- This project is based on [HoneyCred](https://github.com/hosom/honeycred/tree/master), this is a port from GoLang to C++. Currently it's lacking argument parsing due to my lack of knowledge of parsing arguemnts in C++. Ideally, I would like 4 arguments, those being the following:

1. Help Menu -h
2. Username -u
3. Domain -d
4. Password -p

If you have the knowledge to build it, please feel free to submit a pull request :D

An Agent will be created shortly that sleeps for 60 minutes to ensure that the credentials are persistent in LSASS until the machine restarts.

One feature I would like to implement is a persistent agent that survives through a machine restart.
