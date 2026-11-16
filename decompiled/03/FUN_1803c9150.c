// FUN_1803c9150 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803c9150 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1803c9150(longlong *param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong lVar1;
  char *pcVar2;
  byte bVar3;
  char cVar4;
  undefined1 uVar5;
  byte local_28 [16];
  
  lVar1 = *param_1;
  if (*(char *)(lVar1 + 0x14) != '\0') {
    if (*(char *)(lVar1 + 0x1b) == '\0') {
      bVar3 = *(byte *)(lVar1 + 0x15);
      local_28[0] = 0;
      local_28[1] = 2;
      local_28[2] = 3;
      local_28[3] = 4;
      local_28[4] = 5;
      local_28[5] = 6;
      local_28[6] = 8;
      local_28[7] = 9;
      if (10 < bVar3) {
        if (0x12 < bVar3) goto LAB_1803c91e6;
        bVar3 = local_28[bVar3 - 0xb];
      }
      if ((bVar3 != 6) || (*(char *)(lVar1 + 0x23) == '\0')) goto LAB_1803c91e6;
    }
    if (*(char *)(*param_2 + 0x1c) != '\0') {
      cVar4 = FUN_1803c61a0(param_3[1],*(longlong *)param_3[2] + 0x14,1,0);
      if ((cVar4 == '\0') && (*(char *)*param_3 == '\0')) {
        uVar5 = 0;
      }
      else {
        uVar5 = 1;
      }
      *(undefined1 *)*param_3 = uVar5;
    }
  }
LAB_1803c91e6:
  pcVar2 = (char *)*param_1;
  if (*pcVar2 != '\0') {
    if (pcVar2[7] == '\0') {
      bVar3 = pcVar2[1];
      local_28[0] = 0;
      local_28[1] = 2;
      local_28[2] = 3;
      local_28[3] = 4;
      local_28[4] = 5;
      local_28[5] = 6;
      local_28[6] = 8;
      local_28[7] = 9;
      if (10 < bVar3) {
        if (0x12 < bVar3) goto LAB_1803c9256;
        bVar3 = local_28[bVar3 - 0xb];
      }
      if ((bVar3 != 6) || (pcVar2[0xf] == '\0')) goto LAB_1803c9256;
    }
    if (*(char *)(*param_2 + 8) != '\0') {
      cVar4 = FUN_1803c61a0(param_3[1],*(undefined8 *)param_3[2],1,0);
      if ((cVar4 == '\0') && (*(char *)*param_3 == '\0')) {
        uVar5 = 0;
      }
      else {
        uVar5 = 1;
      }
      *(undefined1 *)*param_3 = uVar5;
    }
  }
LAB_1803c9256:
  lVar1 = *param_1;
  if (*(char *)(lVar1 + 0x28) != '\0') {
    if (*(char *)(lVar1 + 0x2f) == '\0') {
      bVar3 = *(byte *)(lVar1 + 0x29);
      local_28[0] = 0;
      local_28[1] = 2;
      local_28[2] = 3;
      local_28[3] = 4;
      local_28[4] = 5;
      local_28[5] = 6;
      local_28[6] = 8;
      local_28[7] = 9;
      if (10 < bVar3) {
        if (0x12 < bVar3) goto LAB_1803c92cc;
        bVar3 = local_28[bVar3 - 0xb];
      }
      if ((bVar3 != 6) || (*(char *)(lVar1 + 0x37) == '\0')) goto LAB_1803c92cc;
    }
    if (*(char *)(*param_2 + 0x30) != '\0') {
      cVar4 = FUN_1803c61a0(param_3[1],*(longlong *)param_3[2] + 0x28,1);
      if ((cVar4 == '\0') && (*(char *)*param_3 == '\0')) {
        uVar5 = 0;
      }
      else {
        uVar5 = 1;
      }
      *(undefined1 *)*param_3 = uVar5;
    }
  }
LAB_1803c92cc:
  pcVar2 = (char *)*param_1;
  if (*pcVar2 == '\0') {
LAB_1803c930f:
    if (pcVar2[0x14] != '\0') {
      if (pcVar2[0x1b] == '\0') {
        bVar3 = pcVar2[0x15];
        local_28[0] = 0;
        local_28[1] = 2;
        local_28[2] = 3;
        local_28[3] = 4;
        local_28[4] = 5;
        local_28[5] = 6;
        local_28[6] = 8;
        local_28[7] = 9;
        if (10 < bVar3) {
          if (0x12 < bVar3) goto LAB_1803c9350;
          bVar3 = local_28[bVar3 - 0xb];
        }
        if ((bVar3 != 6) || (pcVar2[0x23] == '\0')) goto LAB_1803c9350;
      }
      if (*(char *)(*param_2 + 0x1c) == '\0') goto LAB_1803c937f;
    }
LAB_1803c9350:
    (**(code **)*param_4)
              (*(undefined8 *)param_4[1],*(undefined8 *)param_4[2],*(undefined8 *)param_4[3],
               *(undefined8 *)param_4[4]);
    *(undefined1 *)param_4[5] = 1;
  }
  else {
    if (pcVar2[7] == '\0') {
      bVar3 = pcVar2[1];
      local_28[0] = 0;
      local_28[1] = 2;
      local_28[2] = 3;
      local_28[3] = 4;
      local_28[4] = 5;
      local_28[5] = 6;
      local_28[6] = 8;
      local_28[7] = 9;
      if (10 < bVar3) {
        if (0x12 < bVar3) goto LAB_1803c930f;
        bVar3 = local_28[bVar3 - 0xb];
      }
      if ((bVar3 != 6) || (pcVar2[0xf] == '\0')) goto LAB_1803c930f;
    }
    if (*(char *)(*param_2 + 8) != '\0') goto LAB_1803c930f;
  }
LAB_1803c937f:
  lVar1 = *param_1;
  if (*(char *)(lVar1 + 0x14) != '\0') {
    if (*(char *)(lVar1 + 0x1b) == '\0') {
      bVar3 = *(byte *)(lVar1 + 0x15);
      local_28[0] = 0;
      local_28[1] = 2;
      local_28[2] = 3;
      local_28[3] = 4;
      local_28[4] = 5;
      local_28[5] = 6;
      local_28[6] = 8;
      local_28[7] = 9;
      if (10 < bVar3) {
        if (0x12 < bVar3) goto LAB_1803c93f4;
        bVar3 = local_28[bVar3 - 0xb];
      }
      if ((bVar3 != 6) || (*(char *)(lVar1 + 0x23) == '\0')) goto LAB_1803c93f4;
    }
    if (*(char *)(*param_2 + 0x1c) == '\0') {
      cVar4 = FUN_1803c61a0(param_3[1],*(longlong *)param_3[2] + 0x14,0,0);
      if ((cVar4 == '\0') && (*(char *)*param_3 == '\0')) {
        uVar5 = 0;
      }
      else {
        uVar5 = 1;
      }
      *(undefined1 *)*param_3 = uVar5;
    }
  }
LAB_1803c93f4:
  pcVar2 = (char *)*param_1;
  if (*pcVar2 != '\0') {
    if (pcVar2[7] == '\0') {
      bVar3 = pcVar2[1];
      local_28[0] = 0;
      local_28[1] = 2;
      local_28[2] = 3;
      local_28[3] = 4;
      local_28[4] = 5;
      local_28[5] = 6;
      local_28[6] = 8;
      local_28[7] = 9;
      if (10 < bVar3) {
        if (0x12 < bVar3) goto LAB_1803c9464;
        bVar3 = local_28[bVar3 - 0xb];
      }
      if ((bVar3 != 6) || (pcVar2[0xf] == '\0')) goto LAB_1803c9464;
    }
    if (*(char *)(*param_2 + 8) == '\0') {
      cVar4 = FUN_1803c61a0(param_3[1],*(undefined8 *)param_3[2],0,0);
      if ((cVar4 == '\0') && (*(char *)*param_3 == '\0')) {
        uVar5 = 0;
      }
      else {
        uVar5 = 1;
      }
      *(undefined1 *)*param_3 = uVar5;
    }
  }
LAB_1803c9464:
  lVar1 = *param_1;
  if (*(char *)(lVar1 + 0x28) != '\0') {
    if (*(char *)(lVar1 + 0x2f) == '\0') {
      bVar3 = *(byte *)(lVar1 + 0x29);
      local_28[0] = 0;
      local_28[1] = 2;
      local_28[2] = 3;
      local_28[3] = 4;
      local_28[4] = 5;
      local_28[5] = 6;
      local_28[6] = 8;
      local_28[7] = 9;
      if (10 < bVar3) {
        if (0x12 < bVar3) {
          return;
        }
        bVar3 = local_28[bVar3 - 0xb];
      }
      if (bVar3 != 6) {
        return;
      }
      if (*(char *)(lVar1 + 0x37) == '\0') {
        return;
      }
    }
    if (*(char *)(*param_2 + 0x30) == '\0') {
      cVar4 = FUN_1803c61a0(param_3[1],*(longlong *)param_3[2] + 0x28,0,1);
      if ((cVar4 == '\0') && (*(char *)*param_3 == '\0')) {
        uVar5 = 0;
      }
      else {
        uVar5 = 1;
      }
      *(undefined1 *)*param_3 = uVar5;
    }
  }
  return;
}



