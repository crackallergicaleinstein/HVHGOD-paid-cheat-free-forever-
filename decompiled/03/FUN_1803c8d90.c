// FUN_1803c8d90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803c8d90 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1803c8d90(longlong *param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6,int param_7)

{
  longlong lVar1;
  char *pcVar2;
  bool bVar3;
  char cVar4;
  byte bVar5;
  undefined1 uVar6;
  byte local_28 [16];
  
  if (param_7 != 0) {
    lVar1 = *param_1;
    if (*(char *)(lVar1 + 0x14) != '\0') {
      if (*(char *)(lVar1 + 0x1b) == '\0') {
        bVar5 = *(byte *)(lVar1 + 0x15);
        local_28[0] = 0;
        local_28[1] = 2;
        local_28[2] = 3;
        local_28[3] = 4;
        local_28[4] = 5;
        local_28[5] = 6;
        local_28[6] = 8;
        local_28[7] = 9;
        if (10 < bVar5) {
          if (0x12 < bVar5) goto LAB_1803c8e30;
          bVar5 = local_28[bVar5 - 0xb];
        }
        if ((bVar5 != 6) || (*(char *)(lVar1 + 0x23) == '\0')) goto LAB_1803c8e30;
      }
      if (*(char *)(*param_2 + 0x1c) != '\0') {
        cVar4 = FUN_1803c61a0(param_3[1],*(longlong *)param_3[2] + 0x14,1,0);
        if ((cVar4 == '\0') && (*(char *)*param_3 == '\0')) {
          uVar6 = 0;
        }
        else {
          uVar6 = 1;
        }
        *(undefined1 *)*param_3 = uVar6;
      }
    }
LAB_1803c8e30:
    pcVar2 = (char *)*param_1;
    if (*pcVar2 != '\0') {
      if (pcVar2[7] == '\0') {
        bVar5 = pcVar2[1];
        local_28[0] = 0;
        local_28[1] = 2;
        local_28[2] = 3;
        local_28[3] = 4;
        local_28[4] = 5;
        local_28[5] = 6;
        local_28[6] = 8;
        local_28[7] = 9;
        if (10 < bVar5) {
          if (0x12 < bVar5) goto LAB_1803c8ea0;
          bVar5 = local_28[bVar5 - 0xb];
        }
        if ((bVar5 != 6) || (pcVar2[0xf] == '\0')) goto LAB_1803c8ea0;
      }
      if (*(char *)(*param_2 + 8) != '\0') {
        cVar4 = FUN_1803c61a0(param_3[1],*(undefined8 *)param_3[2],1,0);
        if ((cVar4 == '\0') && (*(char *)*param_3 == '\0')) {
          uVar6 = 0;
        }
        else {
          uVar6 = 1;
        }
        *(undefined1 *)*param_3 = uVar6;
      }
    }
LAB_1803c8ea0:
    lVar1 = *param_1;
    if (*(char *)(lVar1 + 0x28) != '\0') {
      if (*(char *)(lVar1 + 0x2f) == '\0') {
        bVar5 = *(byte *)(lVar1 + 0x29);
        local_28[0] = 0;
        local_28[1] = 2;
        local_28[2] = 3;
        local_28[3] = 4;
        local_28[4] = 5;
        local_28[5] = 6;
        local_28[6] = 8;
        local_28[7] = 9;
        if (10 < bVar5) {
          if (0x12 < bVar5) goto LAB_1803c8f16;
          bVar5 = local_28[bVar5 - 0xb];
        }
        if ((bVar5 != 6) || (*(char *)(lVar1 + 0x37) == '\0')) goto LAB_1803c8f16;
      }
      if (*(char *)(*param_2 + 0x30) != '\0') {
        cVar4 = FUN_1803c61a0(param_3[1],*(longlong *)param_3[2] + 0x28,1);
        if ((cVar4 == '\0') && (*(char *)*param_3 == '\0')) {
          uVar6 = 0;
        }
        else {
          uVar6 = 1;
        }
        *(undefined1 *)*param_3 = uVar6;
      }
    }
  }
LAB_1803c8f16:
  pcVar2 = (char *)*param_1;
  if (*pcVar2 == '\0') {
LAB_1803c8f59:
    if (pcVar2[0x14] != '\0') {
      if (pcVar2[0x1b] == '\0') {
        bVar5 = pcVar2[0x15];
        local_28[0] = 0;
        local_28[1] = 2;
        local_28[2] = 3;
        local_28[3] = 4;
        local_28[4] = 5;
        local_28[5] = 6;
        local_28[6] = 8;
        local_28[7] = 9;
        if (10 < bVar5) {
          if (0x12 < bVar5) goto LAB_1803c8f9e;
          bVar5 = local_28[bVar5 - 0xb];
        }
        if ((bVar5 != 6) || (pcVar2[0x23] == '\0')) goto LAB_1803c8f9e;
      }
      if (*(char *)(*param_2 + 0x1c) == '\0') goto LAB_1803c8f9a;
    }
LAB_1803c8f9e:
    bVar3 = false;
  }
  else {
    if (pcVar2[7] == '\0') {
      bVar5 = pcVar2[1];
      local_28[0] = 0;
      local_28[1] = 2;
      local_28[2] = 3;
      local_28[3] = 4;
      local_28[4] = 5;
      local_28[5] = 6;
      local_28[6] = 8;
      local_28[7] = 9;
      if (10 < bVar5) {
        if (0x12 < bVar5) goto LAB_1803c8f59;
        bVar5 = local_28[bVar5 - 0xb];
      }
      if ((bVar5 != 6) || (pcVar2[0xf] == '\0')) goto LAB_1803c8f59;
    }
    if (*(char *)(*param_2 + 8) != '\0') goto LAB_1803c8f59;
LAB_1803c8f9a:
    bVar3 = true;
  }
  if (param_7 == 1) {
    return;
  }
  if (!bVar3) {
    (**(code **)*param_4)
              (*(undefined8 *)param_4[1],*(undefined8 *)param_4[2],*(undefined8 *)param_4[3],
               *(undefined8 *)param_4[4]);
    *(undefined1 *)param_4[5] = 1;
  }
  lVar1 = *param_1;
  if (*(char *)(lVar1 + 0x14) != '\0') {
    if (*(char *)(lVar1 + 0x1b) == '\0') {
      bVar5 = *(byte *)(lVar1 + 0x15);
      local_28[0] = 0;
      local_28[1] = 2;
      local_28[2] = 3;
      local_28[3] = 4;
      local_28[4] = 5;
      local_28[5] = 6;
      local_28[6] = 8;
      local_28[7] = 9;
      if (10 < bVar5) {
        if (0x12 < bVar5) goto LAB_1803c9052;
        bVar5 = local_28[bVar5 - 0xb];
      }
      if ((bVar5 != 6) || (*(char *)(lVar1 + 0x23) == '\0')) goto LAB_1803c9052;
    }
    if (*(char *)(*param_2 + 0x1c) == '\0') {
      cVar4 = FUN_1803c61a0(param_3[1],*(longlong *)param_3[2] + 0x14,0,0);
      if ((cVar4 == '\0') && (*(char *)*param_3 == '\0')) {
        uVar6 = 0;
      }
      else {
        uVar6 = 1;
      }
      *(undefined1 *)*param_3 = uVar6;
    }
  }
LAB_1803c9052:
  pcVar2 = (char *)*param_1;
  if (*pcVar2 != '\0') {
    if (pcVar2[7] == '\0') {
      bVar5 = pcVar2[1];
      local_28[0] = 0;
      local_28[1] = 2;
      local_28[2] = 3;
      local_28[3] = 4;
      local_28[4] = 5;
      local_28[5] = 6;
      local_28[6] = 8;
      local_28[7] = 9;
      if (10 < bVar5) {
        if (0x12 < bVar5) goto LAB_1803c90c2;
        bVar5 = local_28[bVar5 - 0xb];
      }
      if ((bVar5 != 6) || (pcVar2[0xf] == '\0')) goto LAB_1803c90c2;
    }
    if (*(char *)(*param_2 + 8) == '\0') {
      cVar4 = FUN_1803c61a0(param_3[1],*(undefined8 *)param_3[2],0,0);
      if ((cVar4 == '\0') && (*(char *)*param_3 == '\0')) {
        uVar6 = 0;
      }
      else {
        uVar6 = 1;
      }
      *(undefined1 *)*param_3 = uVar6;
    }
  }
LAB_1803c90c2:
  lVar1 = *param_1;
  if (*(char *)(lVar1 + 0x28) != '\0') {
    if (*(char *)(lVar1 + 0x2f) == '\0') {
      bVar5 = *(byte *)(lVar1 + 0x29);
      local_28[0] = 0;
      local_28[1] = 2;
      local_28[2] = 3;
      local_28[3] = 4;
      local_28[4] = 5;
      local_28[5] = 6;
      local_28[6] = 8;
      local_28[7] = 9;
      if (10 < bVar5) {
        if (0x12 < bVar5) {
          return;
        }
        bVar5 = local_28[bVar5 - 0xb];
      }
      if (bVar5 != 6) {
        return;
      }
      if (*(char *)(lVar1 + 0x37) == '\0') {
        return;
      }
    }
    if (*(char *)(*param_2 + 0x30) == '\0') {
      cVar4 = FUN_1803c61a0(param_3[1],*(longlong *)param_3[2] + 0x28,0,1);
      if ((cVar4 == '\0') && (*(char *)*param_3 == '\0')) {
        uVar6 = 0;
      }
      else {
        uVar6 = 1;
      }
      *(undefined1 *)*param_3 = uVar6;
    }
  }
  return;
}



