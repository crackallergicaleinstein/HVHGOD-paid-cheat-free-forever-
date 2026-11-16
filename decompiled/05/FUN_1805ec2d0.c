// FUN_1805ec2d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805ec2d0 */

ulonglong FUN_1805ec2d0(longlong param_1,int *param_2,ulonglong param_3)

{
  if (param_3 != *(ulonglong *)(param_1 + 0x6838)) {
    return 0xffffffffffffffb8;
  }
  if (param_3 < 5) {
    return 5;
  }
  if (*param_2 == -0x2d04adb) {
    *(undefined8 *)(param_1 + 0x6840) = 0;
    *(undefined8 *)(param_1 + 0x6848) = 0;
    *(undefined8 *)(param_1 + 0x6850) = 0;
    *(undefined8 *)(param_1 + 0x6858) = 0;
    *(undefined8 *)(param_1 + 0x6860) = 0;
    *(uint *)(param_1 + 0x6848) = (*(byte *)(param_2 + 1) & 0xf) + 0xb;
    return -(ulonglong)((*(byte *)(param_2 + 1) & 0xf0) != 0) & 0xfffffffffffffff2;
  }
  return 0xfffffffffffffff6;
}



