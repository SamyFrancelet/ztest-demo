#include <zephyr/kernel.h>
#include <app_version.h>

#include <zephyr/logging/log.h>
LOG_MODULE_REGISTER(main);

int main(void)
{
    LOG_INF("ZTEST Demo application, %s", APP_VERSION_STRING);

    while (1) {
        LOG_INF("Hello world !");
        k_sleep(K_MSEC(1000));
    }

    return 0;
}
