// FUN_18018e7b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18018e7b0 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18018e7b0(undefined8 *param_1,ulonglong param_2,undefined8 *param_3,undefined8 *param_4,
                  char param_5)

{
  ushort uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  char cVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong *plVar9;
  ULONGLONG UVar10;
  longlong *plVar11;
  uint uVar12;
  undefined1 auStack_107b8 [32];
  undefined **ppuStack_10798;
  char *pcStack_10790;
  undefined4 uStack_10788;
  uint uStack_10780;
  undefined8 uStack_10778;
  char cStack_10768;
  char cStack_10767;
  ulonglong uStack_10760;
  uint uStack_10758;
  char cStack_10754;
  undefined8 uStack_10748;
  undefined8 uStack_10740;
  undefined8 uStack_10738;
  undefined8 uStack_10730;
  undefined8 uStack_10728;
  undefined8 uStack_10720;
  undefined8 uStack_10718;
  undefined8 uStack_10710;
  undefined8 uStack_10708;
  undefined8 uStack_10700;
  undefined8 uStack_106f8;
  undefined8 uStack_106f0;
  undefined8 uStack_106e8;
  undefined8 uStack_106e0;
  undefined8 uStack_106d8;
  undefined8 uStack_106d0;
  undefined8 uStack_106c8;
  undefined8 uStack_106b8;
  undefined8 uStack_106b0;
  undefined8 uStack_106a8;
  undefined8 uStack_106a0;
  undefined8 uStack_10698;
  undefined8 uStack_10690;
  undefined8 uStack_10688;
  undefined8 uStack_10680;
  undefined8 uStack_10678;
  undefined8 uStack_10670;
  undefined8 uStack_10668;
  undefined4 uStack_10660;
  undefined1 auStack_1065c [65540];
  char local_658 [1544];
  ulonglong local_50;
  undefined8 uStack_48;
  
  uStack_48 = 0x18018e7cf;
  local_50 = DAT_1808d5f00 ^ (ulonglong)auStack_107b8;
  uStack_10748 = 0;
  uStack_10740 = 0;
  uStack_10738 = 0;
  uStack_10730 = 0;
  uStack_10728 = 0;
  uStack_10720 = 0;
  uStack_10718 = 0;
  uStack_10710 = 0;
  uStack_10708 = 0;
  uStack_10700 = 0;
  uStack_106f8 = 0;
  uStack_106f0 = 0;
  uStack_106e8 = 0;
  uStack_106e0 = 0;
  uStack_106d8 = 0;
  uStack_106d0 = 0;
  uStack_106c8 = 0;
  uVar3 = param_1[6];
  uStack_10760 = param_2;
  cVar6 = FUN_1804513c0(uVar3,1,2);
  if (cVar6 != '\0') {
    lVar8 = FUN_18017ea70();
    *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
    FUN_1801ad780(uVar3,&uStack_10748,param_2);
    lVar8 = FUN_18017ea70();
    if (*(int *)(lVar8 + 4) != 0) {
      *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
    }
  }
  FUN_18063ab10(&uStack_106b8,0,0x1005c);
  uStack_106b8 = *param_3;
  uStack_106b0 = param_3[1];
  uStack_106a8 = param_3[2];
  uStack_106a0 = param_3[3];
  uStack_10698 = param_3[4];
  uStack_10690 = param_3[5];
  uStack_10688 = param_3[6];
  uStack_10680 = param_3[7];
  uStack_10678 = param_3[8];
  uStack_10670 = param_3[9];
  uStack_10668 = param_3[10];
  uStack_10660 = *(undefined4 *)(param_3 + 0xb);
  if (param_4[1] != 0) {
    FUN_18063aed0(auStack_1065c,*param_4);
  }
  uVar5 = uStack_10760;
  if (param_1[0x11] == 0) {
LAB_18018e98d:
    iVar2 = *(int *)(param_4 + 1);
    uVar3 = *param_1;
    uVar4 = param_1[1];
    cVar6 = FUN_1804513c0(uVar4,1,2);
    if (cVar6 == '\0') {
      cStack_10754 = '\0';
    }
    else {
      lVar8 = FUN_18017ea70();
      *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
      pcStack_10790 = (char *)CONCAT44(pcStack_10790._4_4_,iVar2 + 0x5c);
      ppuStack_10798 = (undefined **)&uStack_106b8;
      FUN_1801ade80(&uStack_10758,uVar4,uVar3,&uStack_10748);
      lVar8 = FUN_18017ea70();
      if (*(int *)(lVar8 + 4) != 0) {
        *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
      }
    }
    if (cStack_10754 == '\0') {
      uStack_10758 = 0;
    }
    uVar12 = uStack_10758;
  }
  else {
    if (param_5 == '\0') {
      plVar11 = (longlong *)param_1[0x17];
      plVar9 = (longlong *)plVar11[1];
      cVar6 = *(char *)((longlong)plVar9 + 0x19);
      while (cVar6 == '\0') {
        if ((ulonglong)plVar9[4] < uStack_10760) {
          plVar9 = plVar9 + 2;
        }
        else {
          plVar11 = plVar9;
        }
        plVar9 = (longlong *)*plVar9;
        cVar6 = *(char *)((longlong)plVar9 + 0x19);
      }
      if ((*(char *)((longlong)plVar11 + 0x19) != '\0') || (uStack_10760 < (ulonglong)plVar11[4]))
      goto LAB_18018e98d;
    }
    iVar2 = *(int *)(param_4 + 1);
    uVar3 = param_1[0x11];
    uVar4 = param_1[0x12];
    cVar6 = FUN_1804513c0(uVar4,1,2);
    if (cVar6 == '\0') {
      cStack_10767 = '\0';
    }
    else {
      lVar8 = FUN_18017ea70();
      *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
      pcStack_10790 = (char *)CONCAT44(pcStack_10790._4_4_,iVar2 + 0x5c);
      ppuStack_10798 = (undefined **)&uStack_106b8;
      FUN_1801ade20(&cStack_10768,uVar4,uVar3,uVar5);
      lVar8 = FUN_18017ea70();
      if (*(int *)(lVar8 + 4) != 0) {
        *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
      }
    }
    if (cStack_10767 == '\0') {
      cStack_10768 = '\0';
    }
    uVar12 = (uint)(cStack_10768 != '\0');
  }
  UVar10 = GetTickCount64();
  if ((uVar12 != 1) &&
     (plVar11 = (longlong *)FUN_1801b1000(param_1 + 9,&uStack_10758,&uStack_10760),
     *(ulonglong *)(*plVar11 + 0x18) <= UVar10)) {
    plVar11 = (longlong *)FUN_1801b1000(param_1 + 9,&uStack_10758,&uStack_10760);
    *(ULONGLONG *)(*plVar11 + 0x18) = UVar10 + 30000;
    uVar3 = param_3[2];
    uVar1 = *(ushort *)((longlong)param_3 + 6);
    uVar7 = FUN_18018eb30(param_1,uStack_10760);
    FUN_18063ab10(local_658,0,0x600);
    uStack_10780 = (uint)uVar1;
    pcStack_10790 = (char *)CONCAT44(pcStack_10790._4_4_,uVar12);
    ppuStack_10798 = (undefined **)uStack_10760;
    uStack_10788 = uVar7;
    uStack_10778 = uVar3;
    FUN_18015ad60(local_658,0x600,0xffffffffffffffff,
                  "peer=%llu result=%d session=%d kind=%u offset=%llu");
    ppuStack_10798 = &PTR_180700558;
    if (local_658[0] != '\0') {
      ppuStack_10798 = (undefined **)&DAT_1806bcfc0;
    }
    pcStack_10790 = local_658;
    FUN_1800f6900(2);
  }
}



