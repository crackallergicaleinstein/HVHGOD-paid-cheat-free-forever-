// FUN_1803ff3d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803ff3d0 */

ulonglong FUN_1803ff3d0(undefined8 param_1,longlong param_2,longlong param_3)

{
  ulonglong in_RAX;
  
  if (((((*(char *)(param_2 + 500) == '\0') || (*(char *)(param_3 + 500) == '\0')) ||
       (in_RAX = *(ulonglong *)(param_2 + 0x1e4), in_RAX != *(ulonglong *)(param_3 + 0x1e4))) ||
      (((in_RAX = *(ulonglong *)(param_2 + 0x1ec), in_RAX != *(ulonglong *)(param_3 + 0x1ec) ||
        (*(char *)(param_2 + 0x20c) == '\0')) ||
       ((*(char *)(param_3 + 0x20c) == '\0' ||
        ((in_RAX = *(ulonglong *)(param_2 + 0x1f8), in_RAX != *(ulonglong *)(param_3 + 0x1f8) ||
         (in_RAX = *(ulonglong *)(param_2 + 0x200), in_RAX != *(ulonglong *)(param_3 + 0x200))))))))
      ) || ((in_RAX = (ulonglong)*(uint *)(param_2 + 0x208),
            *(uint *)(param_2 + 0x208) != *(uint *)(param_3 + 0x208) ||
            (((((*(char *)(param_2 + 0x1ab) == '\0' || (*(char *)(param_3 + 0x1ab) == '\0')) ||
               (in_RAX = 0, *(char *)(param_2 + 0x1aa) != *(char *)(param_3 + 0x1aa))) ||
              ((*(char *)(param_2 + 0x1ad) == '\0' || (*(char *)(param_3 + 0x1ad) == '\0')))) ||
             (in_RAX = 0, *(char *)(param_2 + 0x1ac) != *(char *)(param_3 + 0x1ac))))))) {
    return in_RAX & 0xffffffffffffff00;
  }
  return 1;
}



