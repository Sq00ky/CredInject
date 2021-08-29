# CredInject
Hello Dear Reader!

Welcome to the CredInject repo -- This project is based on [HoneyCred](https://github.com/hosom/honeycred/tree/master) and uses the same method to inject credentials into LSASS. This is primarily a port from GoLang to C++. Hopefully we can add some more features one day :D

Major props to Stephen Hosom for coming up with a working POC!

### Defaults
Currently, it injects the following credentials into memory:

User: Felix
Domain: Contoso.com
Password: xQc
Agent Path: C:\Users\Administrator\Desktop\agent.exe

---

### Wishlist
Currently it's lacking argument parsing due to my lack of knowledge of parsing arguemnts in C++. Ideally, I would like 4 arguments, those being the following:

1. Help Menu -h
2. Username -u
3. Domain -d
4. Password -p
5. Agent -a

If you have the knowledge to build it, please feel free to submit a pull request :D

One feature I would like to implement is a persistent agent that survives through a machine restart.
