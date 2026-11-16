// FUN_1805affd0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805affd0 */

int FUN_1805affd0(char *param_1,undefined4 param_2,undefined8 param_3,uint *param_4,
                 undefined8 *param_5)

{
  char *pcVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined2 uVar4;
  short sVar5;
  ushort uVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  char *pcVar14;
  undefined **ppuVar15;
  ulonglong uVar16;
  int local_res18 [2];
  
  uVar13 = *(undefined8 *)(param_4 + 0xe);
  uVar16 = 0;
  local_res18[0] = 0;
  if ((*param_4 & 1) == 0) {
    iVar7 = strncmp(param_1,"STARTFONT",9);
    if (iVar7 != 0) {
      return 0xb0;
    }
    *param_4 = *param_4 | 1;
    lVar11 = FUN_18057aad0(uVar13,0xc0,local_res18);
    *(longlong *)(param_4 + 0xc) = lVar11;
    if (local_res18[0] == 0) {
      *(undefined8 *)(lVar11 + 0x80) = uVar13;
      return 0;
    }
    return local_res18[0];
  }
  puVar3 = *(undefined8 **)(param_4 + 0xc);
  iVar7 = strncmp(param_1,"COMMENT",7);
  if (iVar7 == 0) {
    if ((*param_4 >> 0xd & 1) != 0) {
      iVar7 = FUN_1805ae9f0(puVar3,param_1,param_2);
      return iVar7;
    }
  }
  else {
    if (((*param_4 & 0x10) == 0) && (iVar7 = strncmp(param_1,"STARTPROPERTIES ",0x10), iVar7 == 0))
    {
      uVar12 = FUN_1805b07b0(param_1,0x20);
      uVar8 = FUN_1805aef40(uVar12);
      *(uint *)(puVar3 + 10) = uVar8;
      if (uVar8 < 2) {
        uVar8 = 2;
        *(undefined4 *)(puVar3 + 10) = 2;
      }
      if (param_4[0x10] >> 2 < uVar8) {
        *(undefined4 *)(puVar3 + 10) = 0;
        return 6;
      }
      uVar12 = FUN_18057ad10(uVar13,0x18,0,uVar8,0,local_res18);
      puVar3[0xb] = uVar12;
      if (local_res18[0] != 0) {
        *(undefined4 *)(puVar3 + 10) = 0;
        return local_res18[0];
      }
      uVar12 = FUN_18057abe0(uVar13,0x28,local_res18);
      puVar3[0xe] = uVar12;
      if (local_res18[0] != 0) {
        return local_res18[0];
      }
      local_res18[0] = FUN_18057a4a0(uVar12,uVar13);
      if (local_res18[0] != 0) {
        return local_res18[0];
      }
      ppuVar15 = &PTR_s_ADD_STYLE_NAME_180673b40;
      iVar7 = FUN_18057a4a0(puVar3 + 0x13,uVar13);
      if (iVar7 != 0) {
        return iVar7;
      }
      do {
        local_res18[0] = 0;
        iVar7 = FUN_18057a530(*ppuVar15,uVar16,puVar3 + 0x13,uVar13);
        if (iVar7 != 0) {
          return iVar7;
        }
        uVar16 = uVar16 + 1;
        ppuVar15 = ppuVar15 + 3;
      } while (uVar16 < 0x52);
      *param_4 = *param_4 | 0x10;
      *param_5 = FUN_1805afe30;
      return 0;
    }
    iVar7 = strncmp(param_1,"FONTBOUNDINGBOX ",0x10);
    if (iVar7 == 0) {
      uVar13 = FUN_1805b07b0(param_1,0x20);
      uVar4 = FUN_1805aefc0(uVar13);
      *(undefined2 *)(puVar3 + 1) = uVar4;
      uVar13 = FUN_1805b07b0(uVar13,0x20);
      uVar4 = FUN_1805aefc0(uVar13);
      *(undefined2 *)((longlong)puVar3 + 10) = uVar4;
      uVar13 = FUN_1805b07b0(uVar13,0x20);
      uVar4 = FUN_1805aee80(uVar13);
      *(undefined2 *)((longlong)puVar3 + 0xc) = uVar4;
      uVar13 = FUN_1805b07b0(uVar13,0x20);
      sVar5 = FUN_1805aee80(uVar13);
      *(short *)((longlong)puVar3 + 0xe) = sVar5;
      *(short *)(puVar3 + 2) = sVar5 + *(short *)((longlong)puVar3 + 10);
      *(short *)((longlong)puVar3 + 0x12) = -sVar5;
      *param_4 = *param_4 | 8;
      return local_res18[0];
    }
    iVar7 = strncmp(param_1,"FONT ",5);
    if (iVar7 == 0) {
      pcVar14 = (char *)FUN_1805b07b0(param_1,0x20);
      FUN_18057abd0(uVar13,*puVar3);
      *puVar3 = 0;
      uVar13 = FUN_18057ade0(uVar13,pcVar14,local_res18);
      *puVar3 = uVar13;
      if (local_res18[0] != 0) {
        return local_res18[0];
      }
      lVar11 = 0xb;
      do {
        cVar2 = *pcVar14;
        while (cVar2 != '\0') {
          if (cVar2 == '-') {
            if (*pcVar14 != '\0') {
              pcVar14 = pcVar14 + 1;
            }
            break;
          }
          pcVar1 = pcVar14 + 1;
          pcVar14 = pcVar14 + 1;
          cVar2 = *pcVar1;
        }
        lVar11 = lVar11 + -1;
        if (lVar11 == 0) {
          switch(*pcVar14) {
          case 'C':
          case 'c':
            *(undefined4 *)(puVar3 + 4) = 0x20;
            *param_4 = *param_4 | 2;
            return 0;
          default:
            *(undefined4 *)(puVar3 + 4) = 8;
            *param_4 = *param_4 | 2;
            return 0;
          case 'M':
          case 'm':
            *(undefined4 *)(puVar3 + 4) = 0x10;
            *param_4 = *param_4 | 2;
            return 0;
          }
        }
      } while( true );
    }
    iVar7 = strncmp(param_1,"SIZE ",5);
    if (iVar7 != 0) {
      iVar7 = strncmp(param_1,"CHARS ",6);
      if (iVar7 != 0) {
        return 3;
      }
      uVar8 = *param_4;
      if ((uVar8 & 2) == 0) {
        return 0xb1;
      }
      if ((uVar8 & 4) == 0) {
        return 0xb2;
      }
      if ((uVar8 & 8) == 0) {
        return 0xb3;
      }
      uVar12 = FUN_1805b07b0(param_1,0x20);
      uVar10 = FUN_1805aef40(uVar12);
      *(uint *)(puVar3 + 6) = uVar10;
      param_4[1] = uVar10;
      uVar8 = param_4[0x10] / 0x14;
      if (uVar8 < uVar10) {
        *(uint *)(puVar3 + 6) = uVar8;
        param_4[1] = uVar8;
        uVar10 = uVar8;
      }
      if (uVar10 == 0) {
        *(undefined4 *)(puVar3 + 6) = 0x40;
      }
      if (0x10ffff < param_4[1]) {
        return 6;
      }
      uVar13 = FUN_18057ad10(uVar13,0x30,0,*(undefined4 *)(puVar3 + 6),0,local_res18);
      puVar3[7] = uVar13;
      if (local_res18[0] == 0) {
        *param_4 = *param_4 | 0x20;
        *param_5 = FUN_1805af820;
        return 0;
      }
      return local_res18[0];
    }
    uVar13 = FUN_1805b07b0(param_1,0x20);
    uVar9 = FUN_1805aef40(uVar13);
    *(undefined4 *)((longlong)puVar3 + 0x14) = uVar9;
    uVar13 = FUN_1805b07b0(uVar13,0x20);
    uVar9 = FUN_1805aef40(uVar13);
    *(undefined4 *)(puVar3 + 3) = uVar9;
    uVar13 = FUN_1805b07b0(uVar13,0x20);
    uVar9 = FUN_1805aef40(uVar13);
    *(undefined4 *)((longlong)puVar3 + 0x1c) = uVar9;
    pcVar14 = (char *)FUN_1805b07b0(uVar13,0x20);
    if (*pcVar14 != '\0') {
      uVar6 = FUN_1805aefc0(pcVar14);
      if (4 < uVar6) {
        *(undefined2 *)(puVar3 + 0xf) = 8;
        *param_4 = *param_4 | 4;
        return local_res18[0];
      }
      if (2 < uVar6) {
        *(undefined2 *)(puVar3 + 0xf) = 4;
        *param_4 = *param_4 | 4;
        return local_res18[0];
      }
      if (1 < uVar6) {
        *(undefined2 *)(puVar3 + 0xf) = 2;
        *param_4 = *param_4 | 4;
        return local_res18[0];
      }
    }
    *(undefined2 *)(puVar3 + 0xf) = 1;
    *param_4 = *param_4 | 4;
  }
  return local_res18[0];
}



