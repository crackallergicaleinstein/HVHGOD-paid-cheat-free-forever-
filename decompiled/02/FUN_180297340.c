// FUN_180297340 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180297340 */

void FUN_180297340(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined1 param_4)

{
  int iVar1;
  longlong lVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint local_res20 [2];
  uint local_48 [12];
  
  local_res20[0] = CONCAT31(local_res20[0]._1_3_,param_4);
  if (*(char *)param_1[1] != '\0') {
    lVar2 = param_2[1];
    iVar1 = *(int *)(lVar2 + 0x7c);
    puVar4 = (uint *)(lVar2 + 0x7c);
    if (iVar1 < 0) {
      uVar5 = (uint)(10 < *(byte *)(lVar2 + 0x78));
    }
    else {
      local_48[0] = 2;
      local_res20[0] = 0;
      puVar3 = local_48;
      if (iVar1 < 3) {
        puVar3 = puVar4;
      }
      uVar5 = *puVar3;
    }
    if (uVar5 != 2) {
      if (iVar1 < 0) {
        uVar5 = (uint)(10 < *(byte *)(lVar2 + 0x78));
      }
      else {
        local_48[1] = 2;
        local_res20[0] = 0;
        puVar3 = local_48 + 1;
        if (iVar1 < 3) {
          puVar3 = puVar4;
        }
        uVar5 = *puVar3;
      }
      if (uVar5 != 1) goto LAB_1802973e2;
    }
    FUN_1802909c0(param_3,1,CONCAT71((int7)((ulonglong)puVar4 >> 8),1),0);
  }
LAB_1802973e2:
  if (*(char *)*param_1 != '\0') {
    lVar2 = *param_2;
    iVar1 = *(int *)(lVar2 + 0x7c);
    puVar4 = (uint *)(lVar2 + 0x7c);
    if (iVar1 < 0) {
      uVar5 = (uint)(10 < *(byte *)(lVar2 + 0x78));
    }
    else {
      local_48[2] = 2;
      local_res20[0] = 0;
      puVar3 = local_48 + 2;
      if (iVar1 < 3) {
        puVar3 = puVar4;
      }
      uVar5 = *puVar3;
    }
    if (uVar5 != 2) {
      if (iVar1 < 0) {
        uVar5 = (uint)(10 < *(byte *)(lVar2 + 0x78));
      }
      else {
        local_48[3] = 2;
        local_res20[0] = 0;
        puVar3 = local_48 + 3;
        if (iVar1 < 3) {
          puVar3 = puVar4;
        }
        uVar5 = *puVar3;
      }
      if (uVar5 != 1) goto LAB_18029745c;
    }
    FUN_1802909c0(param_3,0,CONCAT71((int7)((ulonglong)puVar4 >> 8),1),0);
  }
LAB_18029745c:
  if (*(char *)param_1[2] != '\0') {
    lVar2 = param_2[2];
    iVar1 = *(int *)(lVar2 + 0x7c);
    if (iVar1 < 0) {
      uVar5 = (uint)(10 < *(byte *)(lVar2 + 0x78));
    }
    else {
      local_48[4] = 2;
      local_res20[0] = 0;
      puVar4 = local_48 + 4;
      if (iVar1 < 3) {
        puVar4 = (uint *)(lVar2 + 0x7c);
      }
      uVar5 = *puVar4;
    }
    if (uVar5 != 2) {
      if (iVar1 < 0) {
        uVar5 = (uint)(10 < *(byte *)(lVar2 + 0x78));
      }
      else {
        local_48[5] = 2;
        local_res20[0] = 0;
        puVar4 = local_48 + 5;
        if (iVar1 < 3) {
          puVar4 = (uint *)(lVar2 + 0x7c);
        }
        uVar5 = *puVar4;
      }
      if (uVar5 != 1) goto LAB_1802974da;
    }
    FUN_1802909c0(param_3,2,1);
  }
LAB_1802974da:
  if (*(char *)param_1[1] != '\0') {
    lVar2 = param_2[1];
    iVar1 = *(int *)(lVar2 + 0x7c);
    if (iVar1 < 0) {
      uVar5 = (uint)(10 < *(byte *)(lVar2 + 0x78));
    }
    else {
      local_48[6] = 2;
      local_res20[0] = 0;
      puVar4 = local_48 + 6;
      if (iVar1 < 3) {
        puVar4 = (uint *)(lVar2 + 0x7c);
      }
      uVar5 = *puVar4;
    }
    if (uVar5 != 2) {
      if (iVar1 < 0) {
        uVar5 = (uint)(10 < *(byte *)(lVar2 + 0x78));
      }
      else {
        local_res20[0] = 2;
        puVar4 = local_res20;
        if (iVar1 < 3) {
          puVar4 = (uint *)(lVar2 + 0x7c);
        }
        uVar5 = *puVar4;
      }
      if (uVar5 != 0) goto LAB_180297556;
    }
    FUN_1802909c0(param_3,1,0,0);
  }
LAB_180297556:
  if (*(char *)*param_1 != '\0') {
    lVar2 = *param_2;
    iVar1 = *(int *)(lVar2 + 0x7c);
    if (iVar1 < 0) {
      uVar5 = (uint)(10 < *(byte *)(lVar2 + 0x78));
    }
    else {
      local_48[7] = 2;
      local_res20[0] = 0;
      puVar4 = local_48 + 7;
      if (iVar1 < 3) {
        puVar4 = (uint *)(lVar2 + 0x7c);
      }
      uVar5 = *puVar4;
    }
    if (uVar5 != 2) {
      if (iVar1 < 0) {
        uVar5 = (uint)(10 < *(byte *)(lVar2 + 0x78));
      }
      else {
        local_res20[0] = 2;
        puVar4 = local_res20;
        if (iVar1 < 3) {
          puVar4 = (uint *)(lVar2 + 0x7c);
        }
        uVar5 = *puVar4;
      }
      if (uVar5 != 0) goto LAB_1802975cf;
    }
    FUN_1802909c0(param_3,0,0,0);
  }
LAB_1802975cf:
  if (*(char *)param_1[2] != '\0') {
    lVar2 = param_2[2];
    iVar1 = *(int *)(lVar2 + 0x7c);
    if (iVar1 < 0) {
      uVar5 = (uint)(10 < *(byte *)(lVar2 + 0x78));
    }
    else {
      local_48[8] = 2;
      local_res20[0] = 0;
      puVar4 = local_48 + 8;
      if (iVar1 < 3) {
        puVar4 = (uint *)(lVar2 + 0x7c);
      }
      uVar5 = *puVar4;
    }
    if (uVar5 != 2) {
      if (iVar1 < 0) {
        uVar5 = (uint)(10 < *(byte *)(lVar2 + 0x78));
      }
      else {
        local_res20[0] = 2;
        puVar4 = local_res20;
        if (iVar1 < 3) {
          puVar4 = (uint *)(lVar2 + 0x7c);
        }
        uVar5 = *puVar4;
      }
      if (uVar5 != 0) {
        return;
      }
    }
    FUN_1802909c0(param_3,2,0,1);
  }
  return;
}



