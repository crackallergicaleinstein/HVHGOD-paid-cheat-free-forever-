// FUN_1805250f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805250f0 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1805250f0(longlong param_1,char *param_2)

{
  uint *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  longlong *plVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  undefined8 uVar15;
  int iVar16;
  undefined *puVar17;
  longlong lVar18;
  longlong lVar19;
  uint *puVar20;
  char *pcVar21;
  char *pcVar22;
  int iVar23;
  longlong lVar24;
  longlong lVar25;
  undefined8 uVar26;
  undefined4 local_1330 [2];
  char *local_1328;
  longlong local_1320;
  undefined8 local_1318;
  undefined1 local_1310 [16];
  undefined8 local_1300;
  undefined8 local_12f8;
  undefined1 local_12f0 [16];
  undefined8 local_12e0;
  undefined8 local_12d8;
  undefined1 local_12d0 [16];
  undefined8 local_12c0;
  undefined8 local_12b8;
  longlong *local_12a8;
  uint *local_12a0;
  longlong local_1298;
  longlong local_1290;
  longlong *local_1288;
  undefined *local_1280;
  undefined1 local_1278 [32];
  undefined1 local_1258 [16];
  undefined8 local_1248;
  undefined8 uStack_1240;
  undefined1 local_1238 [56];
  undefined1 local_1200 [56];
  undefined1 local_11c8 [56];
  undefined1 local_1190 [56];
  undefined1 local_1158 [4384];
  
  local_1280 = &DAT_1808e6940;
  local_1328 = param_2;
  local_1290 = param_1;
  iVar11 = FUN_1805f68d0(&DAT_1808e6940);
  if (iVar11 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_1808e698c == 0x7fffffff) {
    DAT_1808e698c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  FUN_18063ab10(local_1158,0,0x1110);
  FUN_1805504d0(local_1158);
  lVar25 = 2;
  lVar24 = param_1 + 8;
  do {
    lVar19 = 0x15;
    lVar18 = lVar24;
    do {
      FUN_180525940(lVar18,local_1158 + (lVar18 - (param_1 + 8)));
      lVar18 = lVar18 + 0x68;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    lVar24 = lVar24 + 0x888;
    lVar25 = lVar25 + -1;
  } while (lVar25 != 0);
  _eh_vector_destructor_iterator_(local_1158,0x888,2,FUN_180525850);
  *(undefined1 *)(param_1 + 0x1118) = 1;
  if (*param_2 == '\x02') {
    iVar11 = 0;
    local_12a8 = (longlong *)(local_1328 + 8);
    uVar15 = 0;
    uVar26 = 0xf;
    pcVar22 = local_1328;
    while( true ) {
      plVar10 = local_12a8;
      local_1288 = local_12a8;
      if (1 < iVar11) break;
      switch(*pcVar22) {
      case '\0':
        iVar23 = 0;
        break;
      case '\x01':
        iVar23 = (int)*(undefined8 *)(*local_12a8 + 8);
        break;
      case '\x02':
        iVar23 = (int)(((longlong *)*local_12a8)[1] - *(longlong *)*local_12a8 >> 4);
        break;
      default:
        iVar23 = 1;
      }
      if (iVar23 <= iVar11) break;
      if (*pcVar22 != '\x02') {
        FUN_180112a50(param_2);
        uVar15 = FUN_18010f410(local_1278);
        FUN_1800f6ca0(local_1190,0x131,uVar15);
                    /* WARNING: Subroutine does not return */
        FUN_180606630(local_1190,&DAT_1808d1050);
      }
      local_1320 = (longlong)iVar11;
      lVar24 = local_1320 * 0x10;
      local_1298 = lVar24;
      if (*(char *)(*(longlong *)*local_12a8 + lVar24) == '\x02') {
        iVar23 = 0;
        lVar25 = local_1320;
        while (iVar23 < 0x15) {
          if (*pcVar22 != '\x02') {
            FUN_180112a50(param_2);
            uVar15 = FUN_18010f410(local_1278);
            FUN_1800f6ca0(local_11c8,0x131,uVar15);
                    /* WARNING: Subroutine does not return */
            FUN_180606630(local_11c8,&DAT_1808d1050);
          }
          pcVar21 = (char *)(*(longlong *)*plVar10 + lVar24);
          switch(*pcVar21) {
          case '\0':
            iVar16 = 0;
            break;
          case '\x01':
            iVar16 = (int)*(undefined8 *)(*(longlong *)(pcVar21 + 8) + 8);
            break;
          case '\x02':
            iVar16 = (int)((*(longlong **)(pcVar21 + 8))[1] - **(longlong **)(pcVar21 + 8) >> 4);
            break;
          default:
            iVar16 = 1;
          }
          if (iVar16 <= iVar23) break;
          if (*pcVar21 != '\x02') {
            FUN_180112a50(pcVar21);
            uVar15 = FUN_18010f410(local_1278);
            FUN_1800f6ca0(local_1200,0x131,uVar15);
                    /* WARNING: Subroutine does not return */
            FUN_180606630(local_1200,&DAT_1808d1050);
          }
          pcVar21 = (char *)(**(longlong **)(pcVar21 + 8) + (longlong)iVar23 * 0x10);
          puVar20 = (uint *)(param_1 + 8 + (lVar25 * 0x15 + (longlong)iVar23) * 0x68);
          local_12a0 = puVar20;
          if (*pcVar21 == '\x01') {
            local_1330[0] = 0;
            uVar12 = FUN_1800e63a0(pcVar21,"definition",local_1330);
            *puVar20 = uVar12;
            local_1330[0] = 0;
            uVar12 = FUN_1800e63a0(pcVar21,"paint",local_1330);
            puVar20[1] = uVar12;
            local_1258._1_15_ = SUB1615((undefined1  [16])0x0,1);
            auVar6[0xf] = 0;
            auVar6._0_15_ = local_1258._1_15_;
            local_1258 = auVar6 << 8;
            local_1248 = uVar15;
            uStack_1240 = uVar26;
            puVar14 = (uint *)FUN_180175550(pcVar21,local_1278,"custom",local_1258);
            puVar1 = puVar20 + 2;
            if (puVar1 != puVar14) {
              FUN_18015c010(puVar1);
              uVar3 = *(undefined8 *)(puVar14 + 2);
              uVar4 = *(undefined8 *)(puVar14 + 4);
              uVar5 = *(undefined8 *)(puVar14 + 6);
              *(undefined8 *)puVar1 = *(undefined8 *)puVar14;
              *(undefined8 *)(puVar20 + 4) = uVar3;
              *(undefined8 *)(puVar20 + 6) = uVar4;
              *(undefined8 *)(puVar20 + 8) = uVar5;
              puVar14[4] = 0;
              puVar14[5] = 0;
              puVar14[6] = 0xf;
              puVar14[7] = 0;
              *(undefined1 *)puVar14 = 0;
            }
            FUN_18015c010(local_1278);
            FUN_18015c010(local_1258);
            if (((0x7fff < *puVar20) || (1000000 < puVar20[1])) ||
               (0x200 < *(ulonglong *)(puVar20 + 6))) {
              local_1318 = 0;
              local_1300 = 0;
              local_12f8 = 0xf;
              local_1310._1_15_ = SUB1615((undefined1  [16])0x0,1);
              auVar7[0xf] = 0;
              auVar7._0_15_ = local_1310._1_15_;
              local_1310 = auVar7 << 8;
              local_12e0 = 0;
              local_12d8 = 0xf;
              local_12f0._1_15_ = SUB1615((undefined1  [16])0x0,1);
              auVar8[0xf] = 0;
              auVar8._0_15_ = local_12f0._1_15_;
              local_12f0 = auVar8 << 8;
              local_12c0 = 0;
              local_12b8 = 0xf;
              local_12d0._1_15_ = SUB1615((undefined1  [16])0x0,1);
              auVar9[0xf] = 0;
              auVar9._0_15_ = local_12d0._1_15_;
              local_12d0 = auVar9 << 8;
              FUN_180525940(puVar20,&local_1318);
              FUN_18015c010(local_12d0);
              FUN_18015c010(local_12f0);
              FUN_18015c010(local_1310);
            }
LAB_1805254f1:
            iVar23 = iVar23 + 1;
            pcVar22 = local_1328;
            lVar25 = local_1320;
          }
          else if ((*pcVar21 == '\x02') && (lVar18 = FUN_1800f3d40(pcVar21), lVar18 == 2)) {
            cVar2 = *(char *)**(undefined8 **)(pcVar21 + 8);
            if (((cVar2 != '\x05') && (cVar2 != '\x06')) ||
               ((cVar2 = ((char *)**(undefined8 **)(pcVar21 + 8))[0x10], cVar2 != '\x05' &&
                (cVar2 != '\x06')))) goto LAB_180525602;
            uVar12 = FUN_1800e62a0();
            if (*pcVar21 != '\x02') {
              FUN_180112a50(pcVar21);
              uVar15 = FUN_18010f410(local_1278);
              FUN_1800f6ca0(local_1238,0x131,uVar15);
                    /* WARNING: Subroutine does not return */
              FUN_180606630(local_1238,&DAT_1808d1050);
            }
            uVar13 = FUN_1800e62a0(**(longlong **)(pcVar21 + 8) + 0x10);
            if (0x46 < uVar12) goto LAB_1805254f1;
            if (uVar13 < 0x8a0) {
              *puVar20 = (uint)*(ushort *)(&DAT_180798170 + (longlong)(int)uVar12 * 2);
              puVar20[1] = (uint)*(ushort *)(&DAT_180798210 + (longlong)(int)uVar13 * 2);
            }
            iVar23 = iVar23 + 1;
            pcVar22 = local_1328;
            lVar25 = local_1320;
          }
          else {
LAB_180525602:
            iVar23 = iVar23 + 1;
          }
        }
      }
      iVar11 = iVar11 + 1;
    }
    puVar17 = local_1280;
  }
  else {
    puVar17 = &DAT_1808e6940;
  }
  FUN_1805f68fc(puVar17);
  return;
}



