// FUN_18028b510 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18028b510 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_18028b510(longlong param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  byte *pbVar6;
  byte *******pppppppbVar7;
  byte *******pppppppbVar8;
  undefined1 auStack_78 [32];
  longlong local_58;
  char local_50;
  byte *******local_48 [2];
  ulonglong local_38;
  ulonglong local_30;
  ulonglong local_20;
  
  local_20 = DAT_1808d5f00 ^ (ulonglong)auStack_78;
  if (param_1 == 0) {
  }
  lVar4 = FUN_18017ea70();
  *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
  local_58 = 0;
  cVar1 = FUN_1804514f0(&local_58,param_1,8);
  lVar4 = local_58;
  lVar5 = FUN_18017ea70();
  if (*(int *)(lVar5 + 4) != 0) {
    *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + -1;
  }
  if ((cVar1 == '\0') || (lVar4 == 0)) {
    lVar4 = 0;
  }
  else {
    lVar5 = FUN_18017ea70();
    *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
    local_58 = 0;
    cVar1 = FUN_1804514f0(&local_58,lVar4,8);
    lVar5 = local_58;
    lVar4 = FUN_18017ea70();
    if (*(int *)(lVar4 + 4) != 0) {
      *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + -1;
    }
    lVar4 = 0;
    if (cVar1 != '\0') {
      lVar4 = lVar5;
    }
  }
  cVar1 = FUN_1804513c0(lVar4,1,2);
  if (cVar1 == '\0') {
  }
  cVar2 = FUN_1804513c0(lVar4,1,2);
  cVar1 = '\0';
  if (cVar2 != '\0') {
    lVar5 = FUN_18017ea70();
    *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
    FUN_1801ad7c0(&local_58,lVar4,param_1);
    lVar4 = FUN_18017ea70();
    if (*(int *)(lVar4 + 4) != 0) {
      *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + -1;
    }
    cVar1 = local_50;
  }
  lVar4 = local_58;
  if (cVar1 == '\0') {
    lVar4 = 0;
  }
  FUN_180454030(local_48,lVar4,0x100);
  pppppppbVar7 = (byte *******)local_48;
  if (0xf < local_30) {
    pppppppbVar7 = local_48[0];
  }
  pppppppbVar8 = (byte *******)((longlong)pppppppbVar7 + local_38);
  if (pppppppbVar7 != pppppppbVar8) {
    do {
      iVar3 = tolower((uint)*(byte *)pppppppbVar7);
      *(byte *)pppppppbVar7 = (byte)iVar3;
      pppppppbVar7 = (byte *******)((longlong)pppppppbVar7 + 1);
    } while (pppppppbVar7 != pppppppbVar8);
  }
  pppppppbVar7 = (byte *******)local_48;
  if (0xf < local_30) {
    pppppppbVar7 = local_48[0];
  }
  if (8 < local_38) {
    lVar4 = (longlong)*pppppppbVar7 + -0x7372656b63697473;
    if (lVar4 == 0) {
      lVar4 = (ulonglong)*(byte *)(pppppppbVar7 + 1) - 0x2f;
    }
    if (lVar4 == 0) goto LAB_18028b728;
  }
  pppppppbVar7 = (byte *******)local_48;
  if (0xf < local_30) {
    pppppppbVar7 = local_48[0];
  }
  if (((local_38 < 8) ||
      (pbVar6 = (byte *)thunk_FUN_1805f9970(pppppppbVar7,(byte *)((longlong)pppppppbVar7 + local_38)
                                            ,"/sticker",8),
      pbVar6 == (byte *)((longlong)pppppppbVar7 + local_38))) ||
     ((longlong)pbVar6 - (longlong)pppppppbVar7 == -1)) {
    FUN_18015c010(local_48);
  }
LAB_18028b728:
  FUN_18015c010(local_48);
}



