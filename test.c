#include <glib.h>

int main(void) {
	char args[] = { "/usr/bin/echo", 0 };
	g_spawn_async_with_pipes(0, args, 0, G_SPAWN_DO_NOT_REAP_CHILD, 0, 0, 0, 0, 0, 0, 0);
}
