// FUN_180589b70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180589b70 */

undefined8 FUN_180589b70(longlong param_1,int param_2,uint param_3,ulonglong param_4,uint *param_5)

{
  short sVar1;
  uint uVar2;
  short local_res8 [4];
  ushort local_res20 [4];
  
  uVar2 = *(uint *)(param_1 + 4) & 0x7fff0000;
  if ((param_4 & 0x10) == 0) {
    if (((uVar2 != 0) || ((*(uint *)(param_1 + 8) & 0x8000) != 0)) &&
       ((*(byte *)(param_1 + 0x410) & 2) == 0)) {
      return 7;
    }
    uVar2 = 0;
    if (param_3 != 0) {
      do {
        (**(code **)(*(longlong *)(param_1 + 0x2d0) + 0x150))
                  (param_1,0,uVar2 + param_2,local_res8,local_res20);
        uVar2 = uVar2 + 1;
        *param_5 = (uint)local_res20[0];
        param_5 = param_5 + 1;
      } while (uVar2 < param_3);
    }
  }
  else {
    if (((uVar2 != 0) || ((*(uint *)(param_1 + 8) & 0x8000) != 0)) &&
       ((*(byte *)(param_1 + 0x410) & 0x10) == 0)) {
      return 7;
    }
    uVar2 = 0;
    if (param_3 != 0) {
      do {
        if (*(char *)(param_1 + 400) == '\0') {
          if (*(short *)(param_1 + 0x208) == -1) {
            local_res8[0] = *(short *)(param_1 + 0x13c);
            sVar1 = *(short *)(param_1 + 0x13e);
          }
          else {
            local_res8[0] = *(short *)(param_1 + 0x24e);
            sVar1 = *(short *)(param_1 + 0x250);
          }
          local_res20[0] = sVar1 - local_res8[0];
          if (-1 < (int)local_res8[0] - (int)sVar1) {
            local_res20[0] = local_res8[0] - sVar1;
          }
        }
        else {
          (**(code **)(*(longlong *)(param_1 + 0x2d0) + 0x150))
                    (param_1,1,uVar2 + param_2,local_res8,local_res20);
        }
        uVar2 = uVar2 + 1;
        *param_5 = (uint)local_res20[0];
        param_5 = param_5 + 1;
      } while (uVar2 < param_3);
      return 0;
    }
  }
  return 0;
}



