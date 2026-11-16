// FUN_1804afe90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804afe90 */

void FUN_1804afe90(longlong param_1,ushort param_2)

{
  if (((param_2 != 0) || (*(short *)(param_1 + 0xbb6) != 0)) && (*(char *)(param_1 + 0xbb5) != '\0')
     ) {
    if ((param_2 & 0xfc00) == 0xd800) {
      if (*(short *)(param_1 + 0xbb6) != 0) {
        FUN_1804afdd0(param_1,0xfffd);
      }
      *(ushort *)(param_1 + 0xbb6) = param_2;
      return;
    }
    if (*(short *)(param_1 + 0xbb6) != 0) {
      if ((param_2 & 0xfc00) == 0xdc00) {
        param_2 = 0xfffd;
      }
      else {
        FUN_1804afdd0(param_1,0xfffd);
      }
      *(undefined2 *)(param_1 + 0xbb6) = 0;
    }
    FUN_1804afdd0(param_1,param_2);
  }
  return;
}



