// FUN_1804f2df0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804f2df0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804f2df0(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  byte *pbVar1;
  int iVar2;
  char *pcVar3;
  longlong lVar4;
  short sVar5;
  undefined1 auStack_68 [32];
  int *local_48;
  int local_38;
  int local_34;
  int local_30;
  char local_2c [4];
  undefined4 local_28 [2];
  ulonglong local_20;
  
  local_20 = DAT_1808d5f00 ^ (ulonglong)auStack_68;
  local_34 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28[0] = 0;
  iVar2 = FUN_1804396b0(param_4,"RefScale=%f",local_28);
  if (iVar2 == 1) {
    *(undefined4 *)(param_3 + 8) = local_28[0];
  }
  else {
    iVar2 = FUN_1804396b0(param_4,"LastUsed=%d",&local_30);
    if (iVar2 == 1) {
      sVar5 = (short)(local_30 / 100);
      *(ushort *)(param_3 + 0x10) =
           (sVar5 + (short)((local_30 / 100) / 100) * -4) * 0x80 & 0x780U |
           ((short)local_30 + sVar5 * -4) * 0x800 | (short)(local_30 / 10000) + 0x30U & 0x7f;
    }
    else {
      iVar2 = FUN_1804396b0(param_4,"Column %d%n",&local_34,&local_38);
      if (iVar2 == 1) {
        if ((-1 < local_34) && (local_34 < *(short *)(param_3 + 0xc))) {
          for (pcVar3 = (char *)(local_38 + param_4); (*pcVar3 == ' ' || (*pcVar3 == '\t'));
              pcVar3 = pcVar3 + 1) {
          }
          local_2c[0] = '\0';
          lVar4 = (longlong)local_34 * 0x10;
          *(short *)(lVar4 + 0x1c + param_3) = (short)local_34;
          iVar2 = FUN_1804396b0(pcVar3,"UserID=0x%08X%n",&local_30,&local_38);
          if (iVar2 == 1) {
            for (pcVar3 = pcVar3 + local_38; (*pcVar3 == ' ' || (*pcVar3 == '\t'));
                pcVar3 = pcVar3 + 1) {
            }
          }
          iVar2 = FUN_1804396b0(pcVar3,"Width=%d%n",&local_30,&local_38);
          if (iVar2 == 1) {
            for (pcVar3 = pcVar3 + local_38; (*pcVar3 == ' ' || (*pcVar3 == '\t'));
                pcVar3 = pcVar3 + 1) {
            }
            pbVar1 = (byte *)(lVar4 + 0x22 + param_3);
            *pbVar1 = *pbVar1 & 0xef;
            *(float *)(lVar4 + 0x14 + param_3) = (float)local_30;
            *(uint *)(param_3 + 4) = *(uint *)(param_3 + 4) | 1;
          }
          iVar2 = FUN_1804396b0(pcVar3,"Weight=%f%n",local_28,&local_38);
          if (iVar2 == 1) {
            for (pcVar3 = pcVar3 + local_38; (*pcVar3 == ' ' || (*pcVar3 == '\t'));
                pcVar3 = pcVar3 + 1) {
            }
            pbVar1 = (byte *)(lVar4 + 0x22 + param_3);
            *pbVar1 = *pbVar1 | 0x10;
            *(undefined4 *)(lVar4 + 0x14 + param_3) = local_28[0];
            *(uint *)(param_3 + 4) = *(uint *)(param_3 + 4) | 1;
          }
          iVar2 = FUN_1804396b0(pcVar3,"Visible=%d%n",&local_30,&local_38);
          if (iVar2 == 1) {
            for (pcVar3 = pcVar3 + local_38; (*pcVar3 == ' ' || (*pcVar3 == '\t'));
                pcVar3 = pcVar3 + 1) {
            }
            *(byte *)(lVar4 + 0x22 + param_3) =
                 ((byte)local_30 & 3) << 2 | *(byte *)(lVar4 + 0x22 + param_3) & 0xf3;
            *(uint *)(param_3 + 4) = *(uint *)(param_3 + 4) | 4;
          }
          iVar2 = FUN_1804396b0(pcVar3,"Order=%d%n",&local_30,&local_38);
          if (iVar2 == 1) {
            for (pcVar3 = pcVar3 + local_38; (*pcVar3 == ' ' || (*pcVar3 == '\t'));
                pcVar3 = pcVar3 + 1) {
            }
            *(undefined2 *)(lVar4 + 0x1e + param_3) = (undefined2)local_30;
            *(uint *)(param_3 + 4) = *(uint *)(param_3 + 4) | 2;
          }
          local_48 = &local_38;
          iVar2 = FUN_1804396b0(pcVar3,"Sort=%d%c%n",&local_30,local_2c);
          if (iVar2 == 2) {
            for (pcVar3 = pcVar3 + local_38; (*pcVar3 == ' ' || (*pcVar3 == '\t'));
                pcVar3 = pcVar3 + 1) {
            }
            *(undefined2 *)(lVar4 + 0x20 + param_3) = (undefined2)local_30;
            *(byte *)(lVar4 + 0x22 + param_3) =
                 (local_2c[0] == '^') + 1U | *(byte *)(lVar4 + 0x22 + param_3) & 0xfc;
            *(uint *)(param_3 + 4) = *(uint *)(param_3 + 4) | 8;
          }
          iVar2 = FUN_1804396b0(pcVar3,"ID=0x%08X%n",&local_30,&local_38);
          if (iVar2 == 1) {
            *(int *)(lVar4 + 0x18 + param_3) = local_30;
          }
        }
      }
    }
  }
}



