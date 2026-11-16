// FUN_18059dfc0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18059dfc0 */

undefined8 FUN_18059dfc0(longlong param_1,int param_2,uint param_3,uint param_4,uint *param_5)

{
  byte bVar1;
  uint uVar2;
  ushort local_res8 [4];
  undefined1 local_28 [16];
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((uVar2 & 8) != 0) {
    if ((param_4 & 0x10) == 0) {
      if (*(short *)(param_1 + 0x15a) == 0) {
        return 7;
      }
      if (((*(uint *)(param_1 + 4) & 0x7fff0000) == 0) && ((uVar2 >> 0xf & 1) == 0))
      goto LAB_18059e032;
      bVar1 = *(byte *)(param_1 + 0x410) & 2;
    }
    else {
      if (*(char *)(param_1 + 400) == '\0') {
        return 7;
      }
      if (((*(uint *)(param_1 + 4) & 0x7fff0000) == 0) && ((uVar2 >> 0xf & 1) == 0))
      goto LAB_18059e032;
      bVar1 = *(byte *)(param_1 + 0x410) & 0x10;
    }
    if (bVar1 != 0) {
LAB_18059e032:
      uVar2 = 0;
      if (param_3 != 0) {
        do {
          (**(code **)(*(longlong *)(param_1 + 0x2d0) + 0x150))
                    (param_1,(param_4 & 0x10) != 0,uVar2 + param_2,local_28,local_res8);
          uVar2 = uVar2 + 1;
          *param_5 = (uint)local_res8[0];
          param_5 = param_5 + 1;
        } while (uVar2 < param_3);
      }
      return 0;
    }
  }
  return 7;
}



