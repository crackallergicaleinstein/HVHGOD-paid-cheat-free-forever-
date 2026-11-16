// FUN_1805cdfb0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805cdfb0 */

ulonglong FUN_1805cdfb0(longlong *param_1,int param_2,int param_3,uint param_4,undefined4 param_5,
                       undefined4 param_6,undefined4 param_7,char param_8)

{
  byte *pbVar1;
  char cVar2;
  ushort uVar3;
  longlong lVar4;
  ushort *puVar5;
  uint *puVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  code *pcVar10;
  uint uVar11;
  byte *pbVar12;
  byte *local_res8;
  
  lVar4 = param_1[1];
  if ((param_4 == 0) || (*(uint *)(param_1 + 5) < param_3 + param_4)) {
    return 6;
  }
  uVar8 = FUN_1805788b0(lVar4,*(int *)((longlong)param_1 + 0x24) + param_3);
  if ((int)uVar8 != 0) {
    return uVar8;
  }
  uVar8 = FUN_180577d80(lVar4,(ulonglong)param_4,&local_res8);
  if ((int)uVar8 != 0) {
    return uVar8;
  }
  pbVar1 = local_res8 + param_4;
  switch(param_2 + -1) {
  case 0:
  case 1:
  case 7:
  case 0x10:
    puVar5 = (ushort *)param_1[3];
    pbVar12 = local_res8 + 5;
    if (pbVar1 < pbVar12) goto LAB_1805ce109;
    uVar7 = 0;
    *puVar5 = (ushort)*local_res8;
    puVar5[1] = (ushort)local_res8[1];
    puVar5[2] = (short)(char)local_res8[2];
    puVar5[3] = (short)(char)local_res8[3];
    puVar5[4] = (ushort)local_res8[4];
    puVar5[5] = 0;
    puVar5[6] = 0;
    puVar5[7] = 0;
    *(undefined1 *)(param_1 + 4) = 1;
    break;
  default:
    uVar7 = 0;
    pbVar12 = local_res8;
    goto LAB_1805ce122;
  case 5:
  case 6:
  case 8:
  case 0x11:
    puVar5 = (ushort *)param_1[3];
    if (local_res8 + 5 <= pbVar1) {
      *puVar5 = (ushort)*local_res8;
      puVar5[1] = (ushort)local_res8[1];
      puVar5[2] = (short)(char)local_res8[2];
      puVar5[3] = (short)(char)local_res8[3];
      puVar5[4] = (ushort)local_res8[4];
      if (local_res8 + 8 <= pbVar1) {
        puVar5[5] = (short)(char)local_res8[5];
        uVar7 = 0;
        puVar5[6] = (short)(char)local_res8[6];
        puVar5[7] = (ushort)local_res8[7];
        *(undefined1 *)(param_1 + 4) = 1;
        pbVar12 = local_res8 + 8;
        break;
      }
    }
LAB_1805ce109:
    uVar7 = 6;
    pbVar12 = local_res8;
  }
  if (uVar7 != 0) goto LAB_1805ce2c8;
LAB_1805ce122:
  switch(param_2 + -1) {
  case 0:
  case 5:
    pcVar10 = FUN_1805ce370;
    break;
  case 1:
  case 6:
    uVar3 = ((ushort *)param_1[3])[1];
    uVar9 = (uint)*(ushort *)param_1[3];
    uVar11 = (uVar3 + 7 >> 3) * uVar9;
    if ((uVar11 <= uVar9 * uVar3 + 7 >> 3) || (uVar11 != (int)pbVar1 - (int)pbVar12))
    goto switchD_1805ce13c_caseD_4;
    pcVar10 = FUN_1805ce370;
    break;
  default:
    uVar7 = 8;
    goto LAB_1805ce2c8;
  case 4:
switchD_1805ce13c_caseD_4:
    pcVar10 = FUN_1805cdd60;
    break;
  case 7:
    pbVar12 = pbVar12 + 1;
    if (pbVar1 < pbVar12) goto LAB_1805ce2c8;
  case 8:
    pcVar10 = FUN_1805ce550;
    break;
  case 0x10:
  case 0x11:
  case 0x12:
    uVar7 = 7;
    goto LAB_1805ce2c8;
  }
  if (*(char *)((longlong)param_1 + 0x21) == '\0') {
    uVar7 = 0;
    puVar6 = (uint *)param_1[2];
    if ((char)param_1[4] == '\0') {
      uVar7 = 6;
      goto LAB_1805ce2c8;
    }
    uVar3 = ((ushort *)param_1[3])[1];
    uVar9 = (uint)uVar3;
    *puVar6 = (uint)*(ushort *)param_1[3];
    puVar6[1] = (uint)uVar3;
    cVar2 = *(char *)((longlong)param_1 + 0x22);
    if (cVar2 == '\x01') {
      *(undefined1 *)((longlong)puVar6 + 0x1a) = 1;
      uVar9 = uVar3 + 7 >> 3;
      *(undefined2 *)(puVar6 + 6) = 2;
    }
    else if (cVar2 == '\x02') {
      *(undefined1 *)((longlong)puVar6 + 0x1a) = 3;
      uVar9 = uVar3 + 3 >> 2;
      *(undefined2 *)(puVar6 + 6) = 4;
    }
    else if (cVar2 == '\x04') {
      *(undefined1 *)((longlong)puVar6 + 0x1a) = 4;
      uVar9 = uVar3 + 1 >> 1;
      *(undefined2 *)(puVar6 + 6) = 0x10;
    }
    else if (cVar2 == '\b') {
      *(undefined1 *)((longlong)puVar6 + 0x1a) = 2;
      *(undefined2 *)(puVar6 + 6) = 0x100;
    }
    else {
      if (cVar2 != ' ') {
        uVar7 = 3;
        goto LAB_1805ce2c8;
      }
      *(undefined1 *)((longlong)puVar6 + 0x1a) = 7;
      uVar9 = (uint)uVar3 * 4;
      *(undefined2 *)(puVar6 + 6) = 0x100;
    }
    puVar6[2] = uVar9;
    if (((param_8 != '\0') || (uVar7 = FUN_180579c50(*(undefined8 *)(*param_1 + 0x78)), uVar7 != 0))
       || (*(longlong *)(puVar6 + 4) == 0)) {
      if (uVar7 != 0) goto LAB_1805ce2c8;
      goto LAB_1805ce280;
    }
    *(undefined1 *)((longlong)param_1 + 0x21) = 1;
  }
  else {
LAB_1805ce280:
    if (param_8 != '\0') goto LAB_1805ce2c8;
  }
  uVar7 = (*pcVar10)(param_1,pbVar12,pbVar1,param_5,param_6,param_7);
LAB_1805ce2c8:
  FUN_180578860(lVar4,&local_res8);
  return (ulonglong)uVar7;
}



