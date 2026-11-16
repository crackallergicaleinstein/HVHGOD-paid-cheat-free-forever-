// FUN_180442980 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180442980 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Control flow encountered bad instruction data */

void FUN_180442980(undefined8 *param_1,int *param_2,ushort *param_3)

{
  longlong lVar1;
  code *pcVar2;
  uint3 uVar3;
  char cVar4;
  int iVar5;
  char *pcVar6;
  byte bVar7;
  undefined1 *puVar8;
  byte bVar9;
  ulonglong uVar10;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  undefined1 local_28;
  byte bStack_27;
  byte bStack_26;
  byte local_25;
  ulonglong local_20;
  
  local_20 = DAT_1808d5f00 ^ (ulonglong)auStack_48;
  if (param_2[3] != 0) {
    if (param_2[3] == 1) {
      *param_3 = 0xc;
      puVar8 = auStack_48;
    }
    else {
      puVar8 = auStack_48;
      if ((*(byte *)(param_2 + 2) < 0xf) && (puVar8 = auStack_48, param_1[3] != 0)) {
        *(char *)(param_2 + 5) = *(char *)param_1[2];
        param_1[2] = param_1[2] + 1;
        *(char *)(param_2 + 2) = (char)param_2[2] + '\x01';
        param_1[3] = param_1[3] + -1;
        *param_3 = (ushort)*(byte *)(param_2 + 5);
        puVar8 = auStack_48;
      }
    }
    goto LAB_180442f49;
  }
  puVar8 = auStack_48;
  if ((0xe < *(byte *)(param_2 + 2)) || (puVar8 = auStack_48, param_1[3] == 0)) goto LAB_180442f49;
  *(char *)(param_2 + 5) = *(char *)param_1[2];
  param_1[2] = param_1[2] + 1;
  *(char *)(param_2 + 2) = (char)param_2[2] + '\x01';
  param_1[3] = param_1[3] + -1;
  iVar5 = param_2[4];
  pcVar6 = (char *)(longlong)iVar5;
  switch(iVar5) {
  case 0:
    bVar9 = *(byte *)(param_2 + 5);
    if (bVar9 == 0xf) {
      param_2[4] = 1;
      *param_3 = (ushort)*(byte *)(param_2 + 5);
      puVar8 = auStack_48;
      break;
    }
    if (bVar9 == 0x62) {
LAB_180442a6b:
      puVar8 = auStack_48;
      if ((0xe < *(byte *)(param_2 + 2)) || (puVar8 = auStack_48, param_1[3] == 0)) break;
      if (((*(byte *)param_1[2] & 0xf0) < 0xc0) && (*param_2 != 0)) goto switchD_180442a42_caseD_2;
      puVar8 = auStack_48;
      if (((*(byte *)(param_2 + 8) & 4) != 0) ||
         ((puVar8 = auStack_48, *(char *)(param_1 + 4) != '\0' ||
          (puVar8 = auStack_48, *(char *)((longlong)param_1 + 0x24) != '\0')))) break;
      uVar10 = 0;
      _local_28 = (uint3)bVar9;
      local_25 = 0;
      if (bVar9 == 0x62) {
        iVar5 = FUN_180441020(param_1,param_2,&bStack_27,3);
        uVar3 = _local_28;
joined_r0x000180442cc0:
        puVar8 = auStack_48;
        if (iVar5 < 0) break;
        bStack_26 = (byte)(uVar3 >> 0x10);
        uVar10 = (ulonglong)bStack_26;
        bStack_27 = (byte)(uVar3 >> 8);
        bVar7 = bStack_27;
        _local_28 = uVar3;
      }
      else {
        *(byte *)(param_2 + 0x3e) = *(byte *)(param_2 + 2) - 1;
        if (bVar9 == 0xc4) {
          iVar5 = FUN_180441020(param_1,param_2,&bStack_27,2);
          uVar3 = _local_28;
          goto joined_r0x000180442cc0;
        }
        puVar8 = auStack_48;
        if (param_1[3] == 0) break;
        bVar7 = *(byte *)param_1[2];
        param_1[2] = (byte *)param_1[2] + 1;
        *(char *)(param_2 + 2) = (char)param_2[2] + '\x01';
        param_1[3] = param_1[3] + -1;
        _local_28 = (uint3)CONCAT11(bVar7,bVar9);
      }
      if ((char)param_2[5] != 'b') {
        param_2[3] = 3;
        iVar5 = FUN_1804410a0(param_1[1],param_2,&local_28);
        puVar8 = auStack_48;
        if (-1 < iVar5) {
          param_2[4] = (uint)*(byte *)((longlong)param_2 + 0xf3);
          *param_3 = (ushort)*(byte *)(param_2 + 5);
          puVar8 = auStack_48;
        }
        break;
      }
      bVar9 = (byte)uVar10;
      if ((uVar10 >> 2 & 1) != 0) {
        param_2[3] = 4;
        *(char *)((longlong)param_2 + 0xfe) = (char)param_2[2] + -4;
        iVar5 = FUN_180441220(param_1[1],param_2,&local_28);
        puVar8 = auStack_48;
        if (-1 < iVar5) {
          param_2[4] = (uint)*(byte *)(param_2 + 0x3d);
          *param_3 = (ushort)*(byte *)(param_2 + 5);
          puVar8 = auStack_48;
        }
        break;
      }
      *(char *)(param_2 + 0x3f) = (char)param_2[2] + -4;
      if (*(int *)*param_1 == 0) {
        param_2[3] = 5;
        lVar1 = param_1[1];
        if (*param_2 == 0) {
          *(ulonglong *)(param_2 + 8) = *(ulonglong *)(param_2 + 8) | 0x40;
          *(byte *)(param_2 + 0x3c) = bVar7 >> 7;
          *(byte *)((longlong)param_2 + 0xf1) = bVar7 >> 6 & 1;
          *(byte *)((longlong)param_2 + 0xf2) = bVar7 >> 5 & 1;
          *(byte *)(param_2 + 0x3d) = bVar7 & 0xf;
          *(byte *)((longlong)param_2 + 0xf3) = bVar7 >> 4 & 1;
          if ((bVar7 & 0xf) < 4) {
            *(byte *)((longlong)param_2 + 0xf7) = bVar9 & 3;
            *(byte *)((longlong)param_2 + 0xf6) = bVar9 >> 3 & 0xf;
            *(byte *)(param_2 + 0x3e) = local_25 >> 7;
            *(byte *)((longlong)param_2 + 0xf9) = local_25 >> 4 & 7;
            *(byte *)((longlong)param_2 + 0xfb) = local_25 & 7;
            *(byte *)((longlong)param_2 + 0xfa) = local_25 >> 3 & 1;
            *(byte *)((longlong)param_2 + 0xf5) = bVar9 >> 7;
            *(byte *)(lVar1 + 10) = bVar9 >> 7;
            *(byte *)(lVar1 + 0xb) = ~*(byte *)(param_2 + 0x3c) & 1;
            *(byte *)(lVar1 + 0xc) = ~*(byte *)((longlong)param_2 + 0xf1) & 1;
            *(byte *)(lVar1 + 0xd) = ~*(byte *)((longlong)param_2 + 0xf2) & 1;
            *(byte *)(lVar1 + 0x10) = ~*(byte *)((longlong)param_2 + 0xf3) & 1;
            bVar9 = *(byte *)((longlong)param_2 + 0xfa);
            *(undefined1 *)(lVar1 + 0xf) = 2;
            *(byte *)(lVar1 + 0x11) = ~bVar9 & 1;
            *(byte *)(lVar1 + 0x12) = ~*(byte *)((longlong)param_2 + 0xf6) & 0xf;
            *(char *)(lVar1 + 0x13) = *(char *)((longlong)param_2 + 0xfb);
            param_2[4] = (uint)*(byte *)(param_2 + 0x3d);
            *param_3 = (ushort)*(byte *)(param_2 + 5);
            puVar8 = auStack_48;
            break;
          }
LAB_180442ddf:
          puVar8 = auStack_48;
          break;
        }
      }
    }
    else {
      if (bVar9 != 0x8f) {
        if ((bVar9 != 0xc4) && (bVar9 != 0xc5)) goto switchD_180442a42_caseD_2;
        goto LAB_180442a6b;
      }
      puVar8 = auStack_48;
      if ((0xe < *(byte *)(param_2 + 2)) || (puVar8 = auStack_48, param_1[3] == 0)) break;
      if ((*(byte *)param_1[2] & 0x1f) < 8) goto switchD_180442a42_caseD_2;
      puVar8 = auStack_48;
      if ((((*(byte *)(param_2 + 8) & 4) != 0) ||
          (puVar8 = auStack_48, *(char *)(param_1 + 4) != '\0')) ||
         (puVar8 = auStack_48, *(char *)((longlong)param_1 + 0x24) != '\0')) break;
      *(byte *)(param_2 + 0x3e) = *(byte *)(param_2 + 2) - 1;
      _local_28 = 0x8f;
      iVar5 = FUN_180441020(param_1,param_2,&bStack_27,2);
      puVar8 = auStack_48;
      if (iVar5 < 0) break;
      param_2[3] = 2;
      lVar1 = param_1[1];
      if (*param_2 != 5) {
        *(ulonglong *)(param_2 + 8) = *(ulonglong *)(param_2 + 8) | 8;
        *(byte *)(param_2 + 0x3c) = bStack_27 >> 7;
        *(byte *)((longlong)param_2 + 0xf1) = bStack_27 >> 6 & 1;
        *(byte *)((longlong)param_2 + 0xf3) = bStack_27 & 0x1f;
        *(byte *)((longlong)param_2 + 0xf2) = bStack_27 >> 5 & 1;
        if ((byte)((bStack_27 & 0x1f) - 8) < 3) {
          *(byte *)((longlong)param_2 + 0xf5) = bStack_26 >> 3 & 0xf;
          *(byte *)(param_2 + 0x3d) = bStack_26 >> 7;
          *(byte *)((longlong)param_2 + 0xf6) = bStack_26 >> 2 & 1;
          *(byte *)((longlong)param_2 + 0xf7) = bStack_26 & 3;
          *(byte *)(lVar1 + 10) = bStack_26 >> 7;
          *(byte *)(lVar1 + 0xb) = ~*(byte *)(param_2 + 0x3c) & 1;
          *(byte *)(lVar1 + 0xc) = ~*(byte *)((longlong)param_2 + 0xf1) & 1;
          *(byte *)(lVar1 + 0xd) = ~*(byte *)((longlong)param_2 + 0xf2) & 1;
          *(char *)(lVar1 + 0xe) = *(char *)((longlong)param_2 + 0xf6);
          *(char *)(lVar1 + 0xf) = *(char *)((longlong)param_2 + 0xf6);
          *(byte *)(lVar1 + 0x12) = ~*(byte *)((longlong)param_2 + 0xf5) & 0xf;
          param_2[4] = *(byte *)((longlong)param_2 + 0xf3) + 1;
          *param_3 = (ushort)*(byte *)(param_2 + 5);
          puVar8 = auStack_48;
          break;
        }
        goto LAB_180442ddf;
      }
    }
    puVar8 = auStack_48;
    break;
  case 1:
    cVar4 = (char)param_2[5];
    if (cVar4 == '\x0f') {
      puVar8 = auStack_48;
      if (*(char *)(param_1 + 4) != '\0') break;
      param_2[3] = 1;
      param_2[4] = 8;
    }
    else {
      if (cVar4 == '8') {
        param_2[4] = 2;
        *param_3 = (ushort)*(byte *)(param_2 + 5);
        puVar8 = auStack_48;
        break;
      }
      if (cVar4 == ':') {
        param_2[4] = 3;
        *param_3 = 0x3a;
        puVar8 = auStack_48;
        break;
      }
    }
  case 2:
  case 3:
  case 9:
  case 10:
  case 0xb:
switchD_180442a42_caseD_2:
    *param_3 = (ushort)*(byte *)(param_2 + 5);
    puVar8 = auStack_48;
    break;
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
    cVar4 = (char)iVar5;
    *(char *)param_2 = (char)*param_2 + cVar4;
    *pcVar6 = *pcVar6 + cVar4;
    *(char *)((longlong)pcVar6 * 2) = *(char *)((longlong)pcVar6 * 2) + cVar4;
    *pcVar6 = *pcVar6 + cVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  default:
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)(0x25);
    puVar8 = auStack_40;
  }
LAB_180442f49:
  *(undefined **)(puVar8 + -8) = &UNK_180442f56;
}



