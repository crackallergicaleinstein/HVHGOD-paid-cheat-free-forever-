// FUN_1804ce830 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804ce830 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804ce830(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  short sVar2;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined2 local_24 [2];
  int local_20 [2];
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_48;
  iVar1 = FUN_1804396b0(param_4,"Pos=%i,%i",&local_28,local_24);
  if (iVar1 == 2) {
    *(uint *)(param_3 + 4) = CONCAT22(local_24[0],(undefined2)local_28);
  }
  else {
    iVar1 = FUN_1804396b0(param_4,"Size=%i,%i",&local_28,local_24);
    if (iVar1 == 2) {
      local_28 = CONCAT22(local_24[0],(undefined2)local_28);
      *(undefined4 *)(param_3 + 8) = local_28;
    }
    else {
      iVar1 = FUN_1804396b0(param_4,"Collapsed=%d",local_20);
      if (iVar1 == 1) {
        *(byte *)(param_3 + 0xe) = *(byte *)(param_3 + 0xe) & 0xfe;
        *(byte *)(param_3 + 0xe) = *(byte *)(param_3 + 0xe) | local_20[0] != 0;
      }
      else {
        iVar1 = FUN_1804396b0(param_4,"IsChild=%d",local_20);
        if (iVar1 == 1) {
          *(byte *)(param_3 + 0xe) = *(byte *)(param_3 + 0xe) & 0xfd;
          *(byte *)(param_3 + 0xe) = *(byte *)(param_3 + 0xe) | -(local_20[0] != 0) & 2U;
        }
        else {
          iVar1 = FUN_1804396b0(param_4,"LastUsed=%d",local_20);
          if (iVar1 == 1) {
            sVar2 = (short)(local_20[0] / 100);
            *(ushort *)(param_3 + 0xc) =
                 (sVar2 + (short)((local_20[0] / 100) / 100) * -4) * 0x80 & 0x780U |
                 ((short)local_20[0] + sVar2 * -4) * 0x800 |
                 (short)(local_20[0] / 10000) + 0x30U & 0x7f;
          }
        }
      }
    }
  }
}



