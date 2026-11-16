// FUN_1801d5040 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801d5040 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_1801d5040(undefined8 param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  byte *******pppppppbVar2;
  byte *******pppppppbVar3;
  byte *******pppppppbVar4;
  ulonglong _Size;
  ulonglong uVar5;
  undefined1 auStack_98 [32];
  byte *******local_78 [2];
  ulonglong local_68;
  ulonglong local_60;
  byte *******local_58 [2];
  ulonglong local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_98;
  if (*(char *)(param_2 + 0xe1) == *(char *)(param_3 + 0xe1)) {
    FUN_18015b360(local_58,param_2 + 0x20);
    FUN_18015b360(local_78,param_3 + 0x20);
    pppppppbVar2 = (byte *******)local_58;
    if (0xf < local_40) {
      pppppppbVar2 = local_58[0];
    }
    pppppppbVar4 = (byte *******)((longlong)pppppppbVar2 + local_48);
    pppppppbVar3 = local_58[0];
    _Size = local_48;
    uVar5 = local_40;
    if (pppppppbVar2 != pppppppbVar4) {
      do {
        iVar1 = tolower((uint)*(byte *)pppppppbVar2);
        *(byte *)pppppppbVar2 = (byte)iVar1;
        pppppppbVar2 = (byte *******)((longlong)pppppppbVar2 + 1);
      } while (pppppppbVar2 != pppppppbVar4);
      pppppppbVar3 = local_58[0];
      _Size = local_48;
      uVar5 = local_40;
    }
    pppppppbVar2 = (byte *******)local_78;
    if (0xf < local_60) {
      pppppppbVar2 = local_78[0];
    }
    pppppppbVar4 = (byte *******)((longlong)pppppppbVar2 + local_68);
    if (pppppppbVar2 != pppppppbVar4) {
      do {
        iVar1 = tolower((uint)*(byte *)pppppppbVar2);
        *(byte *)pppppppbVar2 = (byte)iVar1;
        pppppppbVar2 = (byte *******)((longlong)pppppppbVar2 + 1);
      } while (pppppppbVar2 != pppppppbVar4);
    }
    pppppppbVar2 = (byte *******)local_78;
    if (0xf < local_60) {
      pppppppbVar2 = local_78[0];
    }
    pppppppbVar4 = (byte *******)local_58;
    if (0xf < uVar5) {
      pppppppbVar4 = pppppppbVar3;
    }
    if (local_68 < _Size) {
      _Size = local_68;
    }
    memcmp(pppppppbVar4,pppppppbVar2,_Size);
    FUN_18015c010(local_78);
    FUN_18015c010(local_58);
  }
}



