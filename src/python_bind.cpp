#include "python_bind.h"
#include "video_system.h"

void videoInit() {
    VideoSystem::getInstance().videoInit();
}