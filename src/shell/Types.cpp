#include <infra/Cpp20.h>

#ifdef MUD_MODULES
module toy.shell;
#else
#include <shell/Types.h>
#include <shell/Api.h>
#include <type/Vector.h>
#endif

namespace mud
{
    // Exported types
    template <> TOY_SHELL_EXPORT Type& type<toy::GameMode>() { static Type ty("toy::GameMode", sizeof(toy::GameMode)); return ty; }
    
    template <> TOY_SHELL_EXPORT Type& type<toy::Game>() { static Type ty("Game", sizeof(toy::Game)); return ty; }
    template <> TOY_SHELL_EXPORT Type& type<toy::GameModule>() { static Type ty("GameModule", sizeof(toy::GameModule)); return ty; }
    template <> TOY_SHELL_EXPORT Type& type<toy::GameShell>() { static Type ty("GameShell", sizeof(toy::GameShell)); return ty; }
    template <> TOY_SHELL_EXPORT Type& type<toy::GameModuleBind>() { static Type ty("GameModuleBind", type<toy::GameModule>(), sizeof(toy::GameModuleBind)); return ty; }
    template <> TOY_SHELL_EXPORT Type& type<toy::GameScene>() { static Type ty("GameScene", type<toy::VisuScene>(), sizeof(toy::GameScene)); return ty; }
}
