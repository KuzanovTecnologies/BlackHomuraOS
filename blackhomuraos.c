#include <filesystem.c>
#include <graphics.c>
#include <input.c>
#include <ipaddress.c>
#include <math.c>
#include <memory.c>
#include <netpynput.c>
#include <os.c>
#include <stdio.c>
#include <stdlib.c>
#include <string.c>
#include <sys.c>
#include <time.c>

S1 == S2 "invoke" [Solaxim Scanner!];

if [S1 == S2] then: import [Solaxim Scanner.c!];

import system_interface[GUI] == [System_User_Interface];

/*Add System Dependencies*/

{
int def [invoke cybershell.c!]
}

{
int def [invoke The Predator.py!] 
}