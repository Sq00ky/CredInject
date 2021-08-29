#include <iostream>
#include <windows.h>
#include <processthreadsapi.h>

/*
* 
* BOOL CreateProcessWithLogonW(
  LPCWSTR               lpUsername,
  LPCWSTR               lpDomain,
  LPCWSTR               lpPassword,
  DWORD                 dwLogonFlags,
  LPCWSTR               lpApplicationName,
  LPWSTR                lpCommandLine,
  DWORD                 dwCreationFlags,
  LPVOID                lpEnvironment,
  LPCWSTR               lpCurrentDirectory,
  LPSTARTUPINFOW        lpStartupInfo,
  LPPROCESS_INFORMATION lpProcessInformation
);
*
*/

using namespace std;
int main()
{
    STARTUPINFO si;
    PROCESS_INFORMATION pi;
    si.dwFlags = 0x00000001;
    si.wShowWindow = 0;
    LPCWSTR userName = L"felix"; // The username that will be injected into LSASS
    LPCWSTR userDomain = L"contoso.com"; // The Logon Domain that will be injected into LSASS
    LPCWSTR userPassword = L"xQc2021!!"; // The User Password that will be injected into LSASS
    LPCWSTR applicationName = L"C:\\Users\\administrator\\Desktop\\agent.exe";
    LPCWSTR currentDirectory = L"C:\\";
    LPWSTR procToStart = const_cast<LPTSTR>(TEXT("C:\\Users\\administrator\\Desktop\\agent.exe"));

    CreateProcessWithLogonW(userName,userDomain,userPassword, 0x00000002,applicationName, NULL, 0x04000000,NULL,currentDirectory,&si,&pi);
}
