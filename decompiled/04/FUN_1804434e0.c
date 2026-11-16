// FUN_1804434e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804434e0 */

undefined8 FUN_1804434e0(longlong *param_1,int *param_2)

{
  undefined2 uVar1;
  int iVar2;
  code *pcVar3;
  byte bVar4;
  byte *pbVar5;
  undefined8 uVar6;
  char *pcVar7;
  longlong lVar8;
  byte bVar9;
  ulonglong uVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  ushort *puVar14;
  char cVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  byte *pbVar18;
  ushort local_res18 [4];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  puVar13 = auStack_48;
  puVar12 = auStack_48;
  puVar11 = auStack_48;
  pbVar18 = &DAT_180769fa4;
  pbVar5 = (byte *)0x0;
  uVar17 = 0x80000000000;
LAB_180443525:
  uVar10 = 2;
LAB_180443540:
  bVar9 = *pbVar18;
  uVar16 = 0;
  cVar15 = '\0';
  local_res18[0] = 0;
  switch(bVar9) {
  case 0:
    goto switchD_180443561_caseD_0;
  case 1:
    goto switchD_180443561_caseD_1;
  case 2:
    if (param_2[3] == 0) goto LAB_1804435c6;
    uVar16 = (ulonglong)
             (ushort)((ushort)*(byte *)((longlong)param_2 + 0xf7) * 4 +
                     *(byte *)((longlong)param_2 + 0xf3) + 1);
    goto switchD_18044366d_caseD_2;
  case 3:
    if (param_2[3] == 0) goto LAB_1804435c6;
    if (param_2[3] == 4) {
      uVar16 = (ulonglong)
               (ushort)((ushort)*(byte *)((longlong)param_2 + 0xf7) * 8 +
                       *(byte *)(param_2 + 0x3d) + 1);
    }
    else {
      uVar16 = (ulonglong)
               (ushort)((ushort)*(byte *)((longlong)param_2 + 0xf7) * 4 +
                       *(byte *)(param_2 + 0x3d) + 0x21);
    }
    goto switchD_18044366d_caseD_2;
  case 4:
    uVar6 = FUN_180442980(param_1,param_2,local_res18);
    uVar16 = (ulonglong)local_res18[0];
    uVar17 = 0x80000000000;
    break;
  case 5:
    switch(*param_2) {
    case 0:
      goto switchD_18044366d_caseD_0;
    case 1:
    case 3:
      uVar16 = 1;
      break;
    case 2:
    case 4:
    case 5:
      break;
    default:
      pcVar3 = (code *)swi(0x29);
      (*pcVar3)(0x25);
      puVar11 = auStack_40;
      goto switchD_180443964_default;
    }
    goto switchD_18044366d_caseD_2;
  case 6:
    uVar16 = (ulonglong)(*param_2 != 0);
    goto switchD_18044366d_caseD_2;
  case 7:
    if (*(char *)((longlong)param_2 + 0x102) == '\0') {
      *(byte *)((longlong)param_2 + 0x102) = *(byte *)(param_2 + 2);
      if (*(byte *)(param_2 + 2) < 0xf) {
        if (param_1[3] != 0) {
          bVar4 = *(byte *)param_1[2];
          param_1[2] = (longlong)((byte *)param_1[2] + 1);
          *(char *)(param_2 + 2) = (char)param_2[2] + '\x01';
          param_1[3] = param_1[3] + -1;
          *(ulonglong *)(param_2 + 8) = *(ulonglong *)(param_2 + 8) | 1;
          *(byte *)((longlong)param_2 + 0xff) = bVar4 >> 6;
          *(byte *)(param_2 + 0x40) = bVar4 >> 3 & 7;
          *(byte *)((longlong)param_2 + 0x101) = bVar4 & 7;
          goto LAB_1804436ea;
        }
LAB_1804436fa:
        uVar6 = 0x80200000;
      }
      else {
        uVar6 = 0x80200002;
      }
    }
    else {
LAB_1804436ea:
      uVar16 = (ulonglong)*(byte *)((longlong)param_2 + 0xff);
      uVar6 = 0x100000;
    }
    break;
  case 8:
    if (*(char *)((longlong)param_2 + 0x102) == '\0') {
      *(byte *)((longlong)param_2 + 0x102) = *(byte *)(param_2 + 2);
      if (*(byte *)(param_2 + 2) < 0xf) {
        if (param_1[3] != 0) {
          bVar4 = *(byte *)param_1[2];
          param_1[2] = (longlong)((byte *)param_1[2] + 1);
          *(char *)(param_2 + 2) = (char)param_2[2] + '\x01';
          param_1[3] = param_1[3] + -1;
          *(ulonglong *)(param_2 + 8) = *(ulonglong *)(param_2 + 8) | 1;
          *(byte *)((longlong)param_2 + 0xff) = bVar4 >> 6;
          *(byte *)(param_2 + 0x40) = bVar4 >> 3 & 7;
          *(byte *)((longlong)param_2 + 0x101) = bVar4 & 7;
          goto LAB_180443763;
        }
        uVar6 = 0x80200000;
      }
      else {
        uVar6 = 0x80200002;
      }
      if ((int)uVar6 < 0) break;
    }
    else {
LAB_180443763:
      cVar15 = *(char *)((longlong)param_2 + 0xff);
    }
    uVar16 = (ulonglong)(cVar15 != '\x03');
    uVar6 = 0x100000;
    break;
  case 9:
    if (*(char *)((longlong)param_2 + 0x102) == '\0') {
      *(byte *)((longlong)param_2 + 0x102) = *(byte *)(param_2 + 2);
      if (0xe < *(byte *)(param_2 + 2)) {
        uVar6 = 0x80200002;
        break;
      }
      if (param_1[3] == 0) goto LAB_1804436fa;
      bVar4 = *(byte *)param_1[2];
      param_1[2] = (longlong)((byte *)param_1[2] + 1);
      *(char *)(param_2 + 2) = (char)param_2[2] + '\x01';
      param_1[3] = param_1[3] + -1;
      *(ulonglong *)(param_2 + 8) = *(ulonglong *)(param_2 + 8) | 1;
      *(byte *)((longlong)param_2 + 0xff) = bVar4 >> 6;
      *(byte *)(param_2 + 0x40) = bVar4 >> 3 & 7;
      *(byte *)((longlong)param_2 + 0x101) = bVar4 & 7;
    }
    uVar16 = (ulonglong)*(byte *)(param_2 + 0x40);
    uVar6 = 0x100000;
    break;
  case 10:
    if (*(char *)((longlong)param_2 + 0x102) == '\0') {
      *(byte *)((longlong)param_2 + 0x102) = *(byte *)(param_2 + 2);
      if (0xe < *(byte *)(param_2 + 2)) {
        uVar6 = 0x80200002;
        break;
      }
      if (param_1[3] == 0) goto LAB_1804436fa;
      bVar4 = *(byte *)param_1[2];
      param_1[2] = (longlong)((byte *)param_1[2] + 1);
      *(char *)(param_2 + 2) = (char)param_2[2] + '\x01';
      param_1[3] = param_1[3] + -1;
      *(ulonglong *)(param_2 + 8) = *(ulonglong *)(param_2 + 8) | 1;
      *(byte *)((longlong)param_2 + 0xff) = bVar4 >> 6;
      *(byte *)(param_2 + 0x40) = bVar4 >> 3 & 7;
      *(byte *)((longlong)param_2 + 0x101) = bVar4 & 7;
    }
    uVar16 = (ulonglong)*(byte *)((longlong)param_2 + 0x101);
    uVar6 = 0x100000;
    break;
  case 0xb:
    uVar16 = (ulonglong)(*(char *)((longlong)param_1 + 0x21) != '\0');
    goto switchD_18044366d_caseD_2;
  case 0xc:
    cVar15 = *(char *)((longlong)param_1 + 0x24);
    if (cVar15 == 'f') {
      uVar16 = 2;
      param_2[(ulonglong)*(byte *)((longlong)param_1 + 0x2b) * 2 + 0x1d] = 2;
      *(ulonglong *)(param_2 + 8) = *(ulonglong *)(param_2 + 8) & 0xfffff7ffffffffff;
      pbVar5 = (byte *)FUN_180443f60(pbVar18,0);
    }
    else if (cVar15 == -0xe) {
      uVar16 = 4;
      param_2[(ulonglong)*(byte *)((longlong)param_1 + 0x2b) * 2 + 0x1d] = 2;
      pbVar5 = (byte *)FUN_180443f60(pbVar18,0);
    }
    else if (cVar15 == -0xd) {
      uVar16 = 3;
      param_2[(ulonglong)*(byte *)((longlong)param_1 + 0x2b) * 2 + 0x1d] = 2;
      pbVar5 = (byte *)FUN_180443f60(pbVar18,0);
    }
    else {
      uVar16 = 1;
      pbVar5 = (byte *)FUN_180443f60(pbVar18,0);
    }
    goto switchD_18044366d_caseD_2;
  case 0xd:
    if ((*param_2 == 0) && (*(char *)(param_1[1] + 10) != '\0')) {
      uVar16 = 2;
    }
    else {
      if ((*(ulonglong *)(param_2 + 8) & uVar17) != 0) {
        param_2[(ulonglong)*(byte *)(param_1 + 5) * 2 + 0x1d] = 1;
      }
      switch(*param_2) {
      case 0:
      case 1:
      case 3:
        uVar16 = (ulonglong)(~(ushort)(*(ulonglong *)(param_2 + 8) >> 0x2b) & 1);
        break;
      case 2:
      case 4:
      case 5:
        uVar16 = (ulonglong)((ushort)(*(ulonglong *)(param_2 + 8) >> 0x2b) & 1);
        break;
      default:
switchD_180443964_default:
        pcVar3 = (code *)swi(0x29);
        (*pcVar3)(0x25);
        puVar12 = puVar11 + 8;
        goto switchD_1804439aa_default;
      }
    }
    goto switchD_18044366d_caseD_2;
  case 0xe:
    switch(*param_2) {
    case 0:
      uVar16 = (ulonglong)(ushort)(2 - ((*(ulonglong *)(param_2 + 8) & 0x100000000000) != 0));
      break;
    case 1:
    case 3:
      uVar16 = (ulonglong)(~(ushort)(*(ulonglong *)(param_2 + 8) >> 0x2c) & 1);
      break;
    case 2:
    case 4:
    case 5:
      uVar16 = (ulonglong)((ushort)(*(ulonglong *)(param_2 + 8) >> 0x2c) & 1);
      break;
    default:
switchD_1804439aa_default:
      pcVar3 = (code *)swi(0x29);
      (*pcVar3)(0x25);
      puVar13 = puVar12 + 8;
switchD_180443561_default:
      uVar1 = *(undefined2 *)(pbVar18 + 1);
      iVar2 = param_2[3];
      *(undefined8 *)(puVar13 + -8) = 0x180443b28;
      FUN_180449910(iVar2,uVar1,puVar13 + 0x60);
      iVar2 = *param_2;
      lVar8 = param_1[1];
      bVar9 = (byte)(*(ulonglong *)(param_2 + 8) >> 0x2b) & 1;
      if ((iVar2 == 1) || (iVar2 == 3)) {
        bVar9 = bVar9 + 2;
      }
      else if (iVar2 == 0) {
        bVar9 = bVar9 + ((*(byte *)(lVar8 + 10) & 1) + 2) * '\x02';
      }
      puVar14 = *(ushort **)(puVar13 + 0x60);
      bVar9 = (&DAT_18076a140)
              [(ulonglong)bVar9 + (ulonglong)(*(byte *)((longlong)puVar14 + 5) & 7) * 8];
      *(byte *)((longlong)param_2 + 0x16) = bVar9;
      *(byte *)(lVar8 + 8) = bVar9 >> 5;
      bVar9 = *(byte *)((longlong)puVar14 + 5);
      if ((bVar9 & 7) == 1) {
        *(undefined1 *)((longlong)param_2 + 0x16) = 8;
        bVar9 = *(byte *)((longlong)puVar14 + 5);
      }
      iVar2 = *param_2;
      lVar8 = param_1[1];
      bVar4 = (byte)(*(ulonglong *)(param_2 + 8) >> 0x2c) & 1;
      if ((iVar2 == 1) || (iVar2 == 3)) {
        bVar4 = bVar4 + 2;
      }
      else if (iVar2 == 0) {
        bVar4 = bVar4 + 4;
      }
      bVar9 = (&DAT_180753278)[(ulonglong)bVar4 + (ulonglong)(bVar9 >> 3 & 3) * 8];
      *(byte *)((longlong)param_2 + 0x17) = bVar9;
      *(byte *)(lVar8 + 9) = bVar9 >> 5;
      bVar9 = *pbVar18;
      *(undefined8 *)(puVar13 + -8) = 0x180443bfc;
      uVar6 = FUN_180442710(param_1,param_2,&DAT_180742e20 + (ulonglong)(bVar9 & 0x7f) * 0xe);
      if ((int)uVar6 < 0) {
        return uVar6;
      }
      *(undefined8 *)(puVar13 + -8) = 0x180443c0f;
      uVar6 = FUN_1804431e0(param_1);
      if ((int)uVar6 < 0) {
        return uVar6;
      }
      if (param_2[3] == 1) {
        if (0xe < *(byte *)(param_2 + 2)) {
          return 0x80200002;
        }
        if (param_1[3] == 0) {
          return 0x80200000;
        }
        *(undefined1 *)(param_2 + 5) = *(undefined1 *)param_1[2];
        param_1[2] = param_1[2] + 1;
        *(char *)(param_2 + 2) = (char)param_2[2] + '\x01';
        param_1[3] = param_1[3] + -1;
        *(undefined8 *)(puVar13 + -8) = 0x180443c5b;
        uVar6 = FUN_180443f60(&DAT_180769fa4,0xf);
        *(undefined8 *)(puVar13 + -8) = 0x180443c63;
        uVar6 = FUN_180443f60(uVar6);
        iVar2 = param_2[5];
        *(undefined8 *)(puVar13 + -8) = 0x180443c6f;
        pcVar7 = (char *)FUN_180443f60(uVar6,(char)iVar2);
        if (*pcVar7 == '\0') {
          return 0x80200001;
        }
        cVar15 = *(char *)((longlong)param_2 + 0xff);
        *(undefined8 *)(puVar13 + -8) = 0x180443c94;
        lVar8 = FUN_180443f60(pcVar7,cVar15 != '\x03');
        iVar2 = param_2[3];
        uVar1 = *(undefined2 *)(lVar8 + 1);
        *(undefined8 *)(puVar13 + -8) = 0x180443ca5;
        FUN_180449910(iVar2,uVar1,puVar13 + 0x60);
        puVar14 = *(ushort **)(puVar13 + 0x60);
      }
      param_2[1] = *puVar14 & 0x7ff;
      *(byte *)(param_2 + 6) = (byte)puVar14[1] & 0xf;
      *(byte *)((longlong)param_2 + 0x19) = (byte)puVar14[1] >> 4 & 7;
      *(ushort **)param_1[1] = puVar14;
      param_2[0x17] = (uint)(*(byte *)((longlong)puVar14 + 7) >> 1);
      param_2[0x18] = (uint)(byte)puVar14[4];
      param_2[0x19] = *(byte *)((longlong)puVar14 + 9) & 0x7f;
      param_2[0x1a] = (byte)puVar14[5] & 3;
      param_2[0x1b] = (uint)(byte)((byte)puVar14[5] >> 2);
      if (*(char *)(*param_1 + 8) != '\0') {
        return 0x100000;
      }
      *(undefined8 *)(puVar13 + -8) = 0x180443d16;
      FUN_180441720(param_1,param_2,puVar14);
      iVar2 = param_2[3];
      if ((((iVar2 == 2) || (iVar2 == 3)) || (iVar2 == 4)) || (iVar2 == 5)) {
        lVar8 = param_1[1];
        *(undefined8 *)(puVar13 + -8) = 0x180443d39;
        FUN_180441cb0(lVar8);
      }
      lVar8 = (ulonglong)((byte)puVar14[3] & 0x7f) * 0x28;
      if (((byte)puVar14[3] & 0x7f) != 0) {
        *(ulonglong *)(param_2 + 8) = *(ulonglong *)(param_2 + 8) | 0x200;
      }
      *(undefined **)(param_2 + 10) = &DAT_180769040 + lVar8;
      *(undefined **)(param_2 + 0xc) = &UNK_180769054 + lVar8;
      return 0x100000;
    }
    goto switchD_18044366d_caseD_2;
  case 0xf:
    uVar16 = (ulonglong)*(byte *)(param_1[1] + 0xf);
    uVar6 = 0x80200001;
    if (*(byte *)(param_1[1] + 0xf) != 3) {
      uVar6 = 0x100000;
    }
    break;
  case 0x10:
    uVar16 = (ulonglong)*(byte *)(param_1[1] + 10);
    goto switchD_18044366d_caseD_2;
  case 0x11:
    uVar16 = (ulonglong)*(byte *)(param_1[1] + 0xd);
    goto switchD_18044366d_caseD_2;
  case 0x12:
    uVar16 = (ulonglong)*(byte *)((longlong)param_2 + 0xfb);
    goto switchD_18044366d_caseD_2;
  case 0x13:
    uVar16 = (ulonglong)*(byte *)(param_2 + 0x3e);
    goto switchD_18044366d_caseD_2;
  case 0x14:
    uVar16 = (ulonglong)(*(char *)(*param_1 + 9) != '\0');
    goto switchD_18044366d_caseD_2;
  case 0x15:
    uVar16 = (ulonglong)(*(char *)(*param_1 + 10) != '\0');
    goto switchD_18044366d_caseD_2;
  case 0x16:
    uVar16 = (ulonglong)(*(char *)(*param_1 + 0xb) != '\0');
    goto switchD_18044366d_caseD_2;
  case 0x17:
    uVar16 = (ulonglong)(*(char *)(*param_1 + 0xc) != '\0');
    goto switchD_18044366d_caseD_2;
  case 0x18:
    uVar16 = (ulonglong)(*(char *)(*param_1 + 0xd) != '\0');
    goto switchD_18044366d_caseD_2;
  case 0x19:
    uVar16 = (ulonglong)(*(char *)(*param_1 + 0xe) != '\0');
    goto switchD_18044366d_caseD_2;
  case 0x1a:
    uVar16 = (ulonglong)(*(char *)(*param_1 + 0xf) != '\0');
    goto switchD_18044366d_caseD_2;
  case 0x1b:
    uVar10 = (ulonglong)(*(char *)(*param_1 + 0x10) != '\0');
switchD_18044366d_caseD_0:
    uVar16 = uVar10;
    goto switchD_18044366d_caseD_2;
  default:
    goto switchD_180443561_default;
  }
  if ((int)uVar6 < 0) {
    return uVar6;
  }
  goto switchD_18044366d_caseD_2;
switchD_180443561_caseD_1:
  if (param_2[3] == 0) {
LAB_1804435c6:
    uVar16 = 0;
  }
  else {
    uVar16 = (ulonglong)
             (ushort)((ushort)*(byte *)((longlong)param_2 + 0xf7) * 3 +
                     (*(byte *)((longlong)param_2 + 0xf3) - 7));
  }
switchD_18044366d_caseD_2:
  pbVar18 = (byte *)FUN_180443f60(pbVar18,uVar16 & 0xffff);
  if ((bVar9 == 0) || ((char)bVar9 < '\0')) {
    return 0x100000;
  }
  goto LAB_180443525;
switchD_180443561_caseD_0:
  if (pbVar5 == (byte *)0x0) {
    return 0x80200001;
  }
  if (*(char *)((longlong)param_1 + 0x24) != '\0') {
    param_2[(ulonglong)*(byte *)((longlong)param_1 + 0x2b) * 2 + 0x1d] = 0;
  }
  pbVar18 = pbVar5;
  pbVar5 = (byte *)0x0;
  if (*(char *)((longlong)param_1 + 0x24) == 'f') {
    if (*(byte *)(param_1 + 5) == *(byte *)((longlong)param_1 + 0x2b)) {
      param_2[(ulonglong)*(byte *)((longlong)param_1 + 0x2b) * 2 + 0x1d] = 1;
    }
    *(ulonglong *)(param_2 + 8) = *(ulonglong *)(param_2 + 8) | uVar17;
  }
  goto LAB_180443540;
}



