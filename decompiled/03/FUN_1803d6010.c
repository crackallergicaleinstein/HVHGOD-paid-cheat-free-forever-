// FUN_1803d6010 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803d6010 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803d6010(undefined **param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  char *pcVar5;
  ulonglong uVar6;
  char *pcVar7;
  char *pcVar8;
  undefined1 auStack_688 [32];
  undefined **local_668;
  char *local_660;
  char *local_658 [2];
  char *local_648;
  undefined8 local_640;
  char local_638 [1544];
  ulonglong local_30;
  
  local_30 = DAT_1808d5f00 ^ (ulonglong)auStack_688;
  if ((param_1 != (undefined **)0x0) && (param_2 != 0)) {
    if (DAT_180c7df28 == (undefined8 *)0x0) {
      local_648 = "tier0.dll:g_pMemAlloc";
      local_640 = 0x15;
      DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_648);
    }
    pcVar7 = (char *)(**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x40)
    ;
    if (pcVar7 == (char *)0x0) {
      pcVar7 = (char *)0x0;
    }
    else {
      pcVar7[8] = '\0';
      pcVar7[9] = '\0';
      pcVar7[10] = '\0';
      pcVar7[0xb] = '\0';
      pcVar7[0xc] = '\0';
      pcVar7[0xd] = '\0';
      pcVar7[0xe] = '\0';
      pcVar7[0xf] = '\0';
      pcVar7[0x39] = '\0';
      pcVar7[0x3a] = '\0';
      pcVar7[0x3b] = '\0';
      pcVar7[0x3c] = '\0';
      pcVar7[0x3d] = '\0';
      pcVar7[0x3e] = '\0';
      pcVar7[0x3f] = '\0';
    }
    *(longlong *)(pcVar7 + 0x28) = param_2;
    *(undefined ***)(pcVar7 + 0x30) = param_1;
    pcVar7[0x38] = '\0';
    pcVar8 = pcVar7 + 0x10;
    pcVar8[0] = '\0';
    pcVar8[1] = '\0';
    pcVar8[2] = '\0';
    pcVar8[3] = '\0';
    pcVar8[4] = '\0';
    pcVar8[5] = '\0';
    pcVar8[6] = '\0';
    pcVar8[7] = '\0';
    *(code **)(pcVar7 + 0x18) = FUN_1803d6360;
    *(code **)(pcVar7 + 0x20) = FUN_1803d6470;
    *(char **)pcVar7 = pcVar8;
    *(int *)(pcVar7 + 8) = (int)((longlong)DAT_180b0dfa0 - DAT_180b0df98 >> 3) + 1;
    lVar4 = DAT_180c71ea8;
    local_648 = pcVar7;
    lVar3 = FUN_18017ea70();
    *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + 1;
    if (lVar4 == 0) {
      bVar1 = false;
      pcVar8 = local_648;
    }
    else {
      local_658[0] = (char *)0x0;
      cVar2 = FUN_1804514f0(local_658,lVar4,8);
      if (cVar2 == '\0') {
        bVar1 = false;
        pcVar8 = local_648;
      }
      else {
        bVar1 = true;
        pcVar8 = local_658[0];
      }
    }
    lVar4 = FUN_18017ea70();
    if (*(int *)(lVar4 + 4) != 0) {
      *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + -1;
    }
    if ((bVar1) && (pcVar8 != (char *)0x0)) {
      lVar4 = FUN_18017ea70();
      *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
      if (pcVar8 + 0x18 == (char *)0x0) {
        bVar1 = false;
        pcVar8 = local_648;
      }
      else {
        local_658[0] = (char *)0x0;
        cVar2 = FUN_1804514f0(local_658,pcVar8 + 0x18,8);
        if (cVar2 == '\0') {
          bVar1 = false;
          pcVar8 = local_648;
        }
        else {
          bVar1 = true;
          pcVar8 = local_658[0];
        }
      }
      lVar4 = FUN_18017ea70();
      if (*(int *)(lVar4 + 4) != 0) {
        *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + -1;
      }
      if (!bVar1) {
        pcVar8 = (char *)0x0;
      }
    }
    else {
      pcVar8 = (char *)0x0;
    }
    lVar4 = DAT_180c71ea8;
    pcVar5 = pcVar8;
    cVar2 = FUN_1804513c0(pcVar8,1,2);
    if (cVar2 == '\0') {
      uVar6 = (ulonglong)pcVar5 & 0xffffffffffffff00;
    }
    else {
      lVar3 = FUN_18017ea70();
      *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + 1;
      local_668 = param_1;
      FUN_1803d64c0(local_658,pcVar8,lVar4,pcVar7);
      lVar4 = FUN_18017ea70();
      if (*(int *)(lVar4 + 4) != 0) {
        *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + -1;
      }
      uVar6 = (ulonglong)local_658[0] >> 8 & 0xff;
    }
    cVar2 = (char)local_658[0];
    if ((char)uVar6 == '\0') {
      cVar2 = '\0';
    }
    if (cVar2 == '\0') {
      FUN_18063ab10(local_638,0,0x600);
      local_668 = param_1;
      FUN_18015ad60(local_638,0x600,0xffffffffffffffff,"event=%s reason=registration_failed");
      local_668 = &PTR_180700558;
      if (local_638[0] != '\0') {
        local_668 = (undefined **)&DAT_1806bcfc0;
      }
      local_660 = local_638;
      FUN_1800f6900(3);
    }
    else {
      pcVar7[0x38] = '\x01';
      if (DAT_180b0dfa0 == DAT_180b0dfa8) {
        FUN_1803d6510(uVar6,DAT_180b0dfa0,&local_648);
      }
      else {
        local_648 = (char *)0x0;
        *DAT_180b0dfa0 = pcVar7;
        DAT_180b0dfa0 = DAT_180b0dfa0 + 1;
      }
      pcVar7 = local_648;
    }
    if (pcVar7 != (char *)0x0) {
      if (DAT_180c7df30 == (undefined8 *)0x0) {
        local_648 = "tier0.dll:g_pMemAlloc";
        local_640 = 0x15;
        DAT_180c7df30 = (undefined8 *)FUN_180451750(&local_648);
      }
      (**(code **)(*(longlong *)*DAT_180c7df30 + 0x18))((longlong *)*DAT_180c7df30,pcVar7);
    }
  }
}



