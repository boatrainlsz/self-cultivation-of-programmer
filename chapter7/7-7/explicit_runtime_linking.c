#include <stdio.h>
#include <dlfcn.h>

int main(int argc, char *argv[]) {
    void *handle;
    double (*func)(double);
    char *error;

    handle = dlopen(argv[1], RTLD_LAZY);
    if (handle == NULL) {
        printf("open library failed: %s,error:%s", argv[1], dlerror());
    }

    func = dlsym(handle, "sin");
    if ((error = dlerror()) != NULL) {
        printf("symbol sin not found,error:%s", error);
        goto exit_runso;
    }
    printf("sin(1.0)=%f", func(1.0));
    exit_runso:
    dlclose(handle);
}