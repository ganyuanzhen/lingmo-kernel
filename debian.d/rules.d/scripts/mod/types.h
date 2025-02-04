/* Minimal definitions for mod_devicetable.h and devicetable-offsets.c */
typedef  char __u8;
typedef  short __u16;
typedef  int __u32;
typedef  long long __u64;
typedef struct {
        __u8 b[16];
} guid_t;
typedef guid_t uuid_le;
typedef  char uuid_t[16];
#define UUID_STRING_LEN 36
#define offsetof(a,b) __builtin_offsetof(a,b)
