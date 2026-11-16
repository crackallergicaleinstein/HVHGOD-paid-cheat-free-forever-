// FUN_1805876d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805876d0 */

uint FUN_1805876d0(undefined8 param_1,longlong param_2,uint param_3,undefined4 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  char *pcVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  char *pcVar7;
  undefined4 local_res10 [2];
  
  lVar6 = FUN_180573a90(*(undefined8 *)(*(longlong *)(param_2 + 0x90) + 8),&DAT_18066f8b4);
  if (lVar6 == 0) {
    return 0xb;
  }
  uVar4 = FUN_1805788b0(param_1,0);
  if (uVar4 != 0) {
    return uVar4;
  }
  uVar4 = (**(code **)(lVar6 + 8))(param_1,param_2,param_3,param_4,param_5);
  uVar1 = *(undefined8 *)(param_2 + 0xa0);
  if (uVar4 != 0) {
    return uVar4;
  }
  iVar5 = *(int *)(param_2 + 0xf0);
  if ((((iVar5 != 0x10000) && (iVar5 != 0x20000)) && (iVar5 != 0x74727565)) &&
     ((iVar5 != -0x5a949d9c && (iVar5 != -0x5a938c8c)))) {
    return 2;
  }
  *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x800;
  if ((int)param_3 < 0) {
    return 0;
  }
  uVar4 = (**(code **)(lVar6 + 0x10))(uVar1,param_2,param_3,param_4,param_5);
  if (uVar4 != 0) {
    return uVar4;
  }
  pcVar2 = *(char **)(param_2 + 0x18);
  if (pcVar2 != (char *)0x0) {
    if (((0x19 < (int)*pcVar2 - 0x41U) || (0x19 < (int)pcVar2[1] - 0x41U)) ||
       ((0x19 < (int)pcVar2[2] - 0x41U ||
        ((((0x19 < (int)pcVar2[3] - 0x41U || (0x19 < (int)pcVar2[4] - 0x41U)) ||
          (0x19 < (int)pcVar2[5] - 0x41U)) ||
         ((pcVar2[6] != '+' || (pcVar7 = pcVar2 + 7, pcVar2[7] == '\0')))))))) {
      pcVar7 = pcVar2;
    }
    uVar4 = 0;
    do {
      lVar6 = FUN_180606b80(pcVar7,&DAT_18066f100 + (ulonglong)uVar4 * 0x14);
      if (lVar6 != 0) goto LAB_18058786a;
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < 0x14);
  }
  cVar3 = FUN_180593e80(param_2);
  if (cVar3 != '\0') {
LAB_18058786a:
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x2000;
  }
  uVar4 = FUN_180594950(param_2,uVar1);
  if (uVar4 != 0) {
    return uVar4;
  }
  uVar4 = 0;
  if ((*(uint *)(param_2 + 8) & 0x20001) != 0) {
    if (*(longlong *)(*(longlong *)(param_2 + 0xd0) + 0x50) == 0) {
      uVar4 = FUN_180594b30(param_2,uVar1);
      if (*(int *)(param_2 + 0x3f8) == 0) {
        if ((uVar4 & 0xff) == 0x90) {
          return 2;
        }
      }
      else if ((uVar4 & 0xff) == 0x8e) {
        return uVar4;
      }
      if (uVar4 != 0) {
        return uVar4;
      }
    }
    uVar4 = FUN_180594320(param_2,uVar1);
    if ((uVar4 != 0) && ((char)uVar4 != -0x72)) {
      return uVar4;
    }
    iVar5 = (**(code **)(param_2 + 0x2a0))(param_2,0x6670676d,uVar1,local_res10);
    if (iVar5 == 0) {
      *(undefined4 *)(param_2 + 0x3b0) = local_res10[0];
      uVar4 = FUN_180577d80(uVar1,local_res10[0],param_2 + 0x3b8);
      if ((uVar4 != 0) && ((char)uVar4 != -0x72)) {
        return uVar4;
      }
    }
    else {
      *(undefined8 *)(param_2 + 0x3b8) = 0;
      *(undefined4 *)(param_2 + 0x3b0) = 0;
    }
    iVar5 = (**(code **)(param_2 + 0x2a0))(param_2,0x70726570,uVar1,local_res10);
    if (iVar5 == 0) {
      *(undefined4 *)(param_2 + 0x3c0) = local_res10[0];
      uVar4 = FUN_180577d80(uVar1,local_res10[0],param_2 + 0x3c8);
      if ((uVar4 != 0) && ((char)uVar4 != -0x72)) {
        return uVar4;
      }
    }
    else {
      *(undefined8 *)(param_2 + 0x3c8) = 0;
      uVar4 = 0;
      *(undefined4 *)(param_2 + 0x3c0) = 0;
    }
    if ((((*(longlong *)(*(longlong *)(param_2 + 0xd0) + 0x50) == 0) &&
         (*(int *)(param_2 + 0x28) != 0)) && (*(longlong *)(param_2 + 0x440) != 0)) &&
       (cVar3 = FUN_180593ca0(param_2), cVar3 != '\0')) {
      *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xfffffffe;
    }
  }
  if (((param_3 >> 0x10 == 0) || ((*(uint *)(param_2 + 8) & 0x100) == 0)) ||
     (uVar4 = FUN_1805d7560(param_2,param_3 >> 0x10), uVar4 == 0)) {
    *(code **)(param_2 + 0x2a8) = FUN_18058c880;
    *(code **)(param_2 + 0x2b8) = FUN_18058d370;
    *(code **)(param_2 + 0x2c0) = FUN_18058d410;
    *(code **)(param_2 + 0x2c8) = FUN_18058cb30;
    *(code **)(param_2 + 0x2b0) = FUN_18058c8e0;
  }
  return uVar4;
}



