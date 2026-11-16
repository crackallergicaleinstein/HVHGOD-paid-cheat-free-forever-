// FUN_18035b4c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18035b4c0 */

undefined8 FUN_18035b4c0(longlong *param_1)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined2 *puVar5;
  longlong lVar6;
  char cVar7;
  short sVar8;
  byte bVar9;
  undefined8 extraout_XMM0_Qa;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [64];
  undefined1 auVar13 [64];
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [64];
  undefined1 auVar17 [16];
  undefined1 auVar18 [64];
  char cStackX_9;
  undefined8 local_a8;
  float local_a0;
  undefined8 local_98;
  undefined4 local_90;
  
  lVar4 = *param_1;
  if ((*(char *)(lVar4 + 0xb4) != '\0') && (*(char *)param_1[1] != '\0')) {
    uVar2 = *(uint *)(lVar4 + 0x7c);
    cVar7 = FUN_180354630(*(undefined1 *)(param_1[2] + 0xc),
                          CONCAT31((uint3)(uVar2 >> 9),(char)(uVar2 >> 1)) & 0xffffff01,
                          *(undefined4 *)(lVar4 + 0x88));
    if (cVar7 != '\0') {
      puVar5 = (undefined2 *)param_1[3];
      if (*(char *)((longlong)puVar5 + 1) != '\0') {
        fVar11 = *(float *)(param_1[4] + 0x4c);
        sVar8 = thunk_FUN_180624430(fVar11);
        if (0 < sVar8) {
          return 0;
        }
        fVar10 = *(float *)(lVar4 + 0xac);
        sVar8 = thunk_FUN_180624430(fVar10);
        if (0 < sVar8) {
          return 0;
        }
        if (fVar11 < fVar10) {
          return 0;
        }
      }
      bVar9 = (byte)uVar2 & 1;
      auVar18 = ZEXT464(*(uint *)(lVar4 + 100));
      iVar3 = *(int *)param_1[8];
      auVar16 = ZEXT464(*(uint *)(lVar4 + 0x68));
      auVar12 = ZEXT464(*(uint *)(lVar4 + 0x6c));
      FUN_180354750(*(undefined4 *)param_1[6],*(undefined4 *)(lVar4 + 0xa8),
                    *(undefined4 *)(param_1[7] + 4),*(undefined4 *)(param_1[7] + 8));
      uVar1 = *puVar5;
      auVar13 = ZEXT464(*(uint *)(lVar4 + 0x9c));
      lVar6 = param_1[5];
      if ((((*(char *)(lVar4 + 1) != '\0') && ((uVar2 & 1) == 0)) && (*(byte *)param_1[9] != bVar9))
         && (((*(byte *)param_1[10] != bVar9 &&
              (uVar14 = extraout_XMM0_Qa, sVar8 = thunk_FUN_180624430(auVar18._0_8_), sVar8 < 1)) &&
             (sVar8 = thunk_FUN_180624430(auVar16._0_8_), sVar8 < 1)))) {
        sVar8 = thunk_FUN_180624430(auVar12._0_8_);
        fVar11 = auVar12._0_4_;
        auVar17 = auVar18._0_16_;
        auVar15 = auVar16._0_16_;
        if ((sVar8 < 1) && (fVar10 = 0.0, 0.0 < fVar11)) {
          if ((char)uVar1 != '\0') {
            sVar8 = thunk_FUN_180624430(uVar14);
            fVar11 = auVar12._0_4_;
            auVar17 = auVar18._0_16_;
            auVar15 = auVar16._0_16_;
            if (0 < sVar8) {
              return 0;
            }
            if (fVar11 < (float)uVar14) {
              return 0;
            }
          }
          cStackX_9 = (char)((ushort)uVar1 >> 8);
          if (cStackX_9 != '\0') {
            local_90 = *(undefined4 *)(lVar6 + 0x14);
            auVar15 = vunpcklps_avx(auVar17,auVar15);
            local_a8 = auVar15._0_8_;
            local_98 = *(undefined8 *)(lVar6 + 0xc);
            local_a0 = fVar11;
            cVar7 = FUN_180354970(&local_98,&local_a8,*(undefined4 *)(lVar4 + 0xa4));
            if (cVar7 == '\0') {
              return 0;
            }
          }
          if ((*(char *)(puVar5 + 1) == '\0') ||
             ((((-1 < iVar3 && (iVar3 <= *(int *)(lVar4 + 0xb0))) &&
               (sVar8 = thunk_FUN_180624430(auVar13._0_8_), sVar8 < 1)) && (auVar13._0_4_ <= fVar10)
              ))) {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}



