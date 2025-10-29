#include <graphics.c>

if additional_graphics "invoke" [additional_system_graphics]

/Add System Graphics/

if S1 == S2 "import system graphics" [invoke_system _graphics]

S1 == import system graphics;
S2 == import system customizable graphics;

int def == customize system graphics UI;

if customizing system graphics UI == then include:
(1. GNOME)
(2. XWayland)
(3. X11)
(4. X11)
(5. NATINT32)