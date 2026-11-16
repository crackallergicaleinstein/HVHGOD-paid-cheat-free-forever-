// FUN_18028b7f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18028b7f0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18028b7f0(longlong param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte ******ppppppbVar8;
  byte ******ppppppbVar9;
  undefined1 auStack_78 [32];
  longlong local_58;
  char local_50;
  byte ******local_48 [2];
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
  ppppppbVar8 = (byte ******)local_48;
  if (0xf < local_30) {
    ppppppbVar8 = local_48[0];
  }
  ppppppbVar9 = (byte ******)((longlong)ppppppbVar8 + local_38);
  for (; ppppppbVar8 != ppppppbVar9; ppppppbVar8 = (byte ******)((longlong)ppppppbVar8 + 1)) {
    iVar3 = tolower((uint)*(byte *)ppppppbVar8);
    *(byte *)ppppppbVar8 = (byte)iVar3;
  }
  ppppppbVar8 = (byte ******)local_48;
  if (0xf < local_30) {
    ppppppbVar8 = local_48[0];
  }
  if (((local_38 < 8) ||
      (pbVar7 = (byte *)((longlong)ppppppbVar8 + local_38),
      pbVar6 = (byte *)thunk_FUN_1805f9970(ppppppbVar8,pbVar7,"stattrak",8), pbVar6 == pbVar7)) ||
     ((longlong)pbVar6 - (longlong)ppppppbVar8 == -1)) {
    ppppppbVar8 = (byte ******)local_48;
    if (0xf < local_30) {
      ppppppbVar8 = local_48[0];
    }
    if (((local_38 < 0xc) ||
        (pbVar7 = (byte *)((longlong)ppppppbVar8 + local_38),
        pbVar6 = (byte *)thunk_FUN_1805f9970(ppppppbVar8,pbVar7,"kill_counter",0xc),
        pbVar6 == pbVar7)) || ((longlong)pbVar6 - (longlong)ppppppbVar8 == -1)) {
      ppppppbVar8 = (byte ******)local_48;
      if (0xf < local_30) {
        ppppppbVar8 = local_48[0];
      }
      if (((local_38 < 10) ||
          (pbVar7 = (byte *)thunk_FUN_1805f9970(ppppppbVar8,
                                                (byte *)((longlong)ppppppbVar8 + local_38),
                                                "keychains/",10),
          pbVar7 == (byte *)((longlong)ppppppbVar8 + local_38))) ||
         ((longlong)pbVar7 - (longlong)ppppppbVar8 == -1)) {
        FUN_18015c010(local_48);
      }
    }
  }
  FUN_18015c010(local_48);
}



