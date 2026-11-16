// FUN_180509920 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180509920 */

void FUN_180509920(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  int *piVar4;
  int *piVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  int *piVar9;
  int local_18 [4];
  
  *param_1 = *param_2;
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  param_1[0xa8] = param_2[0xa8];
  uVar3 = *(undefined8 *)(param_2 + 0xb8);
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
  *(undefined8 *)(param_1 + 0xb8) = uVar3;
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_2 + 0xc0);
  param_1[0x118] = param_2[0x118];
  uVar3 = *(undefined8 *)(param_2 + 0x128);
  *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_2 + 0x120);
  *(undefined8 *)(param_1 + 0x128) = uVar3;
  *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)(param_2 + 0x130);
  param_1[0x1a8] = param_2[0x1a8];
  uVar3 = *(undefined8 *)(param_2 + 0x1b8);
  *(undefined8 *)(param_1 + 0x1b0) = *(undefined8 *)(param_2 + 0x1b0);
  *(undefined8 *)(param_1 + 0x1b8) = uVar3;
  *(undefined8 *)(param_1 + 0x1c0) = *(undefined8 *)(param_2 + 0x1c0);
  param_1[0x210] = param_2[0x210];
  uVar3 = *(undefined8 *)(param_2 + 0x220);
  *(undefined8 *)(param_1 + 0x218) = *(undefined8 *)(param_2 + 0x218);
  *(undefined8 *)(param_1 + 0x220) = uVar3;
  *(undefined8 *)(param_1 + 0x228) = *(undefined8 *)(param_2 + 0x228);
  param_1[0x278] = param_2[0x278];
  param_1[0x2b0] = param_2[0x2b0];
  uVar3 = *(undefined8 *)(param_2 + 0x2c0);
  *(undefined8 *)(param_1 + 0x2b8) = *(undefined8 *)(param_2 + 0x2b8);
  *(undefined8 *)(param_1 + 0x2c0) = uVar3;
  *(undefined8 *)(param_1 + 0x2c8) = *(undefined8 *)(param_2 + 0x2c8);
  param_1[0x318] = param_2[0x318];
  uVar3 = *(undefined8 *)(param_2 + 0x328);
  *(undefined8 *)(param_1 + 800) = *(undefined8 *)(param_2 + 800);
  *(undefined8 *)(param_1 + 0x328) = uVar3;
  *(undefined8 *)(param_1 + 0x330) = *(undefined8 *)(param_2 + 0x330);
  param_1[0x380] = param_2[0x380];
  uVar3 = *(undefined8 *)(param_2 + 0x390);
  *(undefined8 *)(param_1 + 0x388) = *(undefined8 *)(param_2 + 0x388);
  *(undefined8 *)(param_1 + 0x390) = uVar3;
  *(undefined8 *)(param_1 + 0x398) = *(undefined8 *)(param_2 + 0x398);
  param_1[0xb00] = param_2[0xb00];
  uVar3 = *(undefined8 *)(param_2 + 0xb10);
  *(undefined8 *)(param_1 + 0xb08) = *(undefined8 *)(param_2 + 0xb08);
  *(undefined8 *)(param_1 + 0xb10) = uVar3;
  *(undefined8 *)(param_1 + 0xb18) = *(undefined8 *)(param_2 + 0xb18);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
  param_1[0x9d] = param_2[0x9d];
  param_1[0x9e] = param_2[0x9e];
  param_1[0x9f] = param_2[0x9f];
  param_1[0xa0] = param_2[0xa0];
  param_1[0xa1] = param_2[0xa1];
  *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_2 + 0x110);
  *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(param_2 + 0x114);
  *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(param_2 + 0x180);
  *(undefined4 *)(param_1 + 0x184) = *(undefined4 *)(param_2 + 0x184);
  *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)(param_2 + 0x188);
  *(undefined4 *)(param_1 + 0x27c) = *(undefined4 *)(param_2 + 0x27c);
  *(undefined4 *)(param_1 + 0x280) = *(undefined4 *)(param_2 + 0x280);
  *(undefined4 *)(param_1 + 0x284) = *(undefined4 *)(param_2 + 0x284);
  *(undefined4 *)(param_1 + 1000) = *(undefined4 *)(param_2 + 1000);
  *(undefined4 *)(param_1 + 0xb68) = *(undefined4 *)(param_2 + 0xb68);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_2 + 0x74);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_2 + 0x84);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_2 + 0x8c);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x90);
  param_1[0x94] = param_2[0x94];
  param_1[0x95] = param_2[0x95];
  param_1[0x96] = param_2[0x96];
  param_1[0x97] = param_2[0x97];
  param_1[0x98] = param_2[0x98];
  param_1[0x99] = param_2[0x99];
  param_1[0x9a] = param_2[0x9a];
  param_1[0x9b] = param_2[0x9b];
  param_1[0x9c] = param_2[0x9c];
  *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_2 + 0x18c);
  *(undefined4 *)(param_1 + 400) = *(undefined4 *)(param_2 + 400);
  *(undefined4 *)(param_1 + 0x194) = *(undefined4 *)(param_2 + 0x194);
  *(undefined4 *)(param_1 + 0x198) = *(undefined4 *)(param_2 + 0x198);
  *(undefined4 *)(param_1 + 0x19c) = *(undefined4 *)(param_2 + 0x19c);
  *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(param_2 + 0x1a0);
  *(undefined4 *)(param_1 + 0x288) = *(undefined4 *)(param_2 + 0x288);
  *(undefined4 *)(param_1 + 0x28c) = *(undefined4 *)(param_2 + 0x28c);
  *(undefined4 *)(param_1 + 0x290) = *(undefined4 *)(param_2 + 0x290);
  *(undefined4 *)(param_1 + 0x29c) = *(undefined4 *)(param_2 + 0x29c);
  *(undefined4 *)(param_1 + 0x294) = *(undefined4 *)(param_2 + 0x294);
  *(undefined4 *)(param_1 + 0x298) = *(undefined4 *)(param_2 + 0x298);
  *(undefined4 *)(param_1 + 0x2a0) = *(undefined4 *)(param_2 + 0x2a0);
  param_1[0x2a8] = param_2[0x2a8];
  param_1[0x2a9] = param_2[0x2a9];
  param_1[0x2aa] = param_2[0x2aa];
  *(undefined4 *)(param_1 + 0x2a4) = *(undefined4 *)(param_2 + 0x2a4);
  param_1[0x2ab] = param_2[0x2ab];
  local_18[0] = 0;
  piVar9 = (int *)(param_2 + 0xaf0);
  lVar6 = 4;
  local_18[1] = 4;
  lVar2 = -(longlong)param_2;
  puVar7 = (undefined8 *)(param_2 + 0x468);
  lVar8 = 0;
  do {
    piVar5 = local_18;
    if (-1 < *piVar9) {
      piVar5 = piVar9;
    }
    piVar4 = local_18 + 1;
    if (*piVar9 < 5) {
      piVar4 = piVar5;
    }
    *(int *)((longlong)piVar9 + ((longlong)param_1 - (longlong)param_2)) = *piVar4;
    piVar9 = piVar9 + 1;
    param_1[lVar8 + 0x3f0] = *(undefined1 *)(puVar7 + -0xf);
    uVar3 = puVar7[-0xd];
    *(undefined8 *)(param_1 + lVar8 + 0x3f8) = puVar7[-0xe];
    *(undefined8 *)((longlong)(param_1 + lVar8 + 0x3f8) + 8) = uVar3;
    *(undefined8 *)(param_1 + lVar8 + 0x408) = puVar7[-0xc];
    *(undefined4 *)((longlong)puVar7 + ((longlong)param_1 - (longlong)param_2) + -0x10) =
         *(undefined4 *)(puVar7 + -2);
    ((undefined1 *)((longlong)puVar7 + lVar2 + -8))[(longlong)param_1] =
         *(undefined1 *)(puVar7 + -1);
    uVar3 = puVar7[1];
    *(undefined8 *)(param_1 + (longlong)puVar7 + lVar2) = *puVar7;
    *(undefined8 *)((longlong)(param_1 + (longlong)puVar7 + lVar2) + 8) = uVar3;
    *(undefined8 *)((undefined1 *)((longlong)puVar7 + lVar2 + 0x10) + (longlong)param_1) = puVar7[2]
    ;
    *(undefined4 *)((undefined1 *)((longlong)puVar7 + lVar2 + 0x60) + (longlong)param_1) =
         *(undefined4 *)(puVar7 + 0xc);
    ((undefined1 *)((longlong)puVar7 + lVar2 + 0x68))[(longlong)param_1] =
         *(undefined1 *)(puVar7 + 0xd);
    uVar3 = puVar7[0xf];
    puVar1 = (undefined8 *)((undefined1 *)((longlong)puVar7 + lVar2 + 0x70) + (longlong)param_1);
    *puVar1 = puVar7[0xe];
    puVar1[1] = uVar3;
    *(undefined8 *)((undefined1 *)((longlong)puVar7 + lVar2 + 0x80) + (longlong)param_1) =
         puVar7[0x10];
    *(undefined4 *)((undefined1 *)((longlong)puVar7 + lVar2 + 0xd0) + (longlong)param_1) =
         *(undefined4 *)(puVar7 + 0x1a);
    ((undefined1 *)((longlong)puVar7 + lVar2 + 0xd8))[(longlong)param_1] =
         *(undefined1 *)(puVar7 + 0x1b);
    uVar3 = puVar7[0x1d];
    puVar1 = (undefined8 *)((undefined1 *)((longlong)puVar7 + lVar2 + 0xe0) + (longlong)param_1);
    *puVar1 = puVar7[0x1c];
    puVar1[1] = uVar3;
    *(undefined8 *)((undefined1 *)((longlong)puVar7 + lVar2 + 0xf0) + (longlong)param_1) =
         puVar7[0x1e];
    *(undefined4 *)((undefined1 *)((longlong)puVar7 + lVar2 + 0x140) + (longlong)param_1) =
         *(undefined4 *)(puVar7 + 0x28);
    lVar6 = lVar6 + -1;
    puVar7 = puVar7 + 0x38;
    lVar8 = lVar8 + 0x1c0;
  } while (lVar6 != 0);
  return;
}



