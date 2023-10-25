// Copyright 2020 Google LLC
//
// This source code is licensed under the BSD-style license found in the
// LICENSE file in the root directory of this source tree.

#include <xnnpack.h>

#include <array>
#include <algorithm>
#include <functional>
#include <iostream>
#include <limits>
#include <random>

#include <xnnpack/common.h>
#include <xnnpack/models.h>

namespace models {

ExecutionPlan QU8MobileNetV3Large(pthreadpool_t threadpool) {
  alignas(16) static std::array<uint8_t, 150528> v0;
  alignas(16) static std::array<uint8_t, 200704> v1;
  alignas(16) static std::array<uint8_t, 200704> v2;
  alignas(16) static std::array<uint8_t, 200704> v3;
  alignas(16) static std::array<uint8_t, 200704> v4;
  alignas(16) static std::array<uint8_t, 200704> v5;
  alignas(16) static std::array<uint8_t, 802816> v6;
  alignas(16) static std::array<uint8_t, 200704> v7;
  alignas(16) static std::array<uint8_t, 75264> v8;
  alignas(16) static std::array<uint8_t, 225792> v9;
  alignas(16) static std::array<uint8_t, 225792> v10;
  alignas(16) static std::array<uint8_t, 75264> v11;
  alignas(16) static std::array<uint8_t, 75264> v12;
  alignas(16) static std::array<uint8_t, 225792> v13;
  alignas(16) static std::array<uint8_t, 56448> v14;
  alignas(16) static std::array<uint8_t, 72> v15;
  alignas(16) static std::array<uint8_t, 24> v16;
  alignas(16) static std::array<uint8_t, 72> v17;
  alignas(16) static std::array<uint8_t, 72> v18;
  alignas(16) static std::array<uint8_t, 72> v19;
  alignas(16) static std::array<uint8_t, 56448> v20;
  alignas(16) static std::array<uint8_t, 31360> v21;
  alignas(16) static std::array<uint8_t, 94080> v22;
  alignas(16) static std::array<uint8_t, 94080> v23;
  alignas(16) static std::array<uint8_t, 120> v24;
  alignas(16) static std::array<uint8_t, 32> v25;
  alignas(16) static std::array<uint8_t, 120> v26;
  alignas(16) static std::array<uint8_t, 120> v27;
  alignas(16) static std::array<uint8_t, 120> v28;
  alignas(16) static std::array<uint8_t, 94080> v29;
  alignas(16) static std::array<uint8_t, 31360> v30;
  alignas(16) static std::array<uint8_t, 31360> v31;
  alignas(16) static std::array<uint8_t, 94080> v32;
  alignas(16) static std::array<uint8_t, 94080> v33;
  alignas(16) static std::array<uint8_t, 120> v34;
  alignas(16) static std::array<uint8_t, 32> v35;
  alignas(16) static std::array<uint8_t, 120> v36;
  alignas(16) static std::array<uint8_t, 120> v37;
  alignas(16) static std::array<uint8_t, 120> v38;
  alignas(16) static std::array<uint8_t, 94080> v39;
  alignas(16) static std::array<uint8_t, 31360> v40;
  alignas(16) static std::array<uint8_t, 31360> v41;
  alignas(16) static std::array<uint8_t, 188160> v42;
  alignas(16) static std::array<uint8_t, 188160> v43;
  alignas(16) static std::array<uint8_t, 47040> v44;
  alignas(16) static std::array<uint8_t, 47040> v45;
  alignas(16) static std::array<uint8_t, 15680> v46;
  alignas(16) static std::array<uint8_t, 39200> v47;
  alignas(16) static std::array<uint8_t, 39200> v48;
  alignas(16) static std::array<uint8_t, 39200> v49;
  alignas(16) static std::array<uint8_t, 39200> v50;
  alignas(16) static std::array<uint8_t, 15680> v51;
  alignas(16) static std::array<uint8_t, 15680> v52;
  alignas(16) static std::array<uint8_t, 36064> v53;
  alignas(16) static std::array<uint8_t, 36064> v54;
  alignas(16) static std::array<uint8_t, 36064> v55;
  alignas(16) static std::array<uint8_t, 36064> v56;
  alignas(16) static std::array<uint8_t, 15680> v57;
  alignas(16) static std::array<uint8_t, 15680> v58;
  alignas(16) static std::array<uint8_t, 36064> v59;
  alignas(16) static std::array<uint8_t, 36064> v60;
  alignas(16) static std::array<uint8_t, 36064> v61;
  alignas(16) static std::array<uint8_t, 36064> v62;
  alignas(16) static std::array<uint8_t, 15680> v63;
  alignas(16) static std::array<uint8_t, 15680> v64;
  alignas(16) static std::array<uint8_t, 94080> v65;
  alignas(16) static std::array<uint8_t, 94080> v66;
  alignas(16) static std::array<uint8_t, 94080> v67;
  alignas(16) static std::array<uint8_t, 94080> v68;
  alignas(16) static std::array<uint8_t, 480> v69;
  alignas(16) static std::array<uint8_t, 120> v70;
  alignas(16) static std::array<uint8_t, 480> v71;
  alignas(16) static std::array<uint8_t, 480> v72;
  alignas(16) static std::array<uint8_t, 480> v73;
  alignas(16) static std::array<uint8_t, 94080> v74;
  alignas(16) static std::array<uint8_t, 21952> v75;
  alignas(16) static std::array<uint8_t, 131712> v76;
  alignas(16) static std::array<uint8_t, 131712> v77;
  alignas(16) static std::array<uint8_t, 131712> v78;
  alignas(16) static std::array<uint8_t, 131712> v79;
  alignas(16) static std::array<uint8_t, 672> v80;
  alignas(16) static std::array<uint8_t, 168> v81;
  alignas(16) static std::array<uint8_t, 672> v82;
  alignas(16) static std::array<uint8_t, 672> v83;
  alignas(16) static std::array<uint8_t, 672> v84;
  alignas(16) static std::array<uint8_t, 131712> v85;
  alignas(16) static std::array<uint8_t, 21952> v86;
  alignas(16) static std::array<uint8_t, 21952> v87;
  alignas(16) static std::array<uint8_t, 131712> v88;
  alignas(16) static std::array<uint8_t, 131712> v89;
  alignas(16) static std::array<uint8_t, 32928> v90;
  alignas(16) static std::array<uint8_t, 32928> v91;
  alignas(16) static std::array<uint8_t, 672> v92;
  alignas(16) static std::array<uint8_t, 168> v93;
  alignas(16) static std::array<uint8_t, 672> v94;
  alignas(16) static std::array<uint8_t, 672> v95;
  alignas(16) static std::array<uint8_t, 672> v96;
  alignas(16) static std::array<uint8_t, 32928> v97;
  alignas(16) static std::array<uint8_t, 7840> v98;
  alignas(16) static std::array<uint8_t, 47040> v99;
  alignas(16) static std::array<uint8_t, 47040> v100;
  alignas(16) static std::array<uint8_t, 47040> v101;
  alignas(16) static std::array<uint8_t, 47040> v102;
  alignas(16) static std::array<uint8_t, 960> v103;
  alignas(16) static std::array<uint8_t, 240> v104;
  alignas(16) static std::array<uint8_t, 960> v105;
  alignas(16) static std::array<uint8_t, 960> v106;
  alignas(16) static std::array<uint8_t, 960> v107;
  alignas(16) static std::array<uint8_t, 47040> v108;
  alignas(16) static std::array<uint8_t, 7840> v109;
  alignas(16) static std::array<uint8_t, 7840> v110;
  alignas(16) static std::array<uint8_t, 47040> v111;
  alignas(16) static std::array<uint8_t, 47040> v112;
  alignas(16) static std::array<uint8_t, 47040> v113;
  alignas(16) static std::array<uint8_t, 47040> v114;
  alignas(16) static std::array<uint8_t, 960> v115;
  alignas(16) static std::array<uint8_t, 240> v116;
  alignas(16) static std::array<uint8_t, 960> v117;
  alignas(16) static std::array<uint8_t, 960> v118;
  alignas(16) static std::array<uint8_t, 960> v119;
  alignas(16) static std::array<uint8_t, 47040> v120;
  alignas(16) static std::array<uint8_t, 7840> v121;
  alignas(16) static std::array<uint8_t, 7840> v122;
  alignas(16) static std::array<uint8_t, 47040> v123;
  alignas(16) static std::array<uint8_t, 47040> v124;
  alignas(16) static std::array<uint8_t, 960> v125;
  alignas(16) static std::array<uint8_t, 1280> v126;
  alignas(16) static std::array<uint8_t, 1280> v127;
  alignas(16) static std::array<uint8_t, 1280> v128;
  alignas(16) static std::array<uint8_t, 1001> v129;
  alignas(16) static std::array<uint8_t, 1001> v130;
  alignas(16) static std::array<uint8_t, 432> w131;
  alignas(16) static std::array<int32_t, 16> w132;
  alignas(16) static std::array<uint8_t, 144> w133;
  alignas(16) static std::array<int32_t, 16> w134;
  alignas(16) static std::array<uint8_t, 256> w135;
  alignas(16) static std::array<int32_t, 16> w136;
  alignas(16) static std::array<uint8_t, 1024> w137;
  alignas(16) static std::array<int32_t, 64> w138;
  alignas(16) static std::array<uint8_t, 576> w139;
  alignas(16) static std::array<int32_t, 64> w140;
  alignas(16) static std::array<uint8_t, 1536> w141;
  alignas(16) static std::array<int32_t, 24> w142;
  alignas(16) static std::array<uint8_t, 1728> w143;
  alignas(16) static std::array<int32_t, 72> w144;
  alignas(16) static std::array<uint8_t, 648> w145;
  alignas(16) static std::array<int32_t, 72> w146;
  alignas(16) static std::array<uint8_t, 1728> w147;
  alignas(16) static std::array<int32_t, 24> w148;
  alignas(16) static std::array<uint8_t, 1728> w149;
  alignas(16) static std::array<int32_t, 72> w150;
  alignas(16) static std::array<uint8_t, 1800> w151;
  alignas(16) static std::array<int32_t, 72> w152;
  alignas(16) static std::array<uint8_t, 1728> w153;
  alignas(16) static std::array<int32_t, 24> w154;
  alignas(16) static std::array<uint8_t, 1728> w155;
  alignas(16) static std::array<int32_t, 72> w156;
  alignas(16) static std::array<uint8_t, 1> w157;
  alignas(16) static std::array<uint8_t, 1> w158;
  alignas(16) static std::array<uint8_t, 2880> w159;
  alignas(16) static std::array<int32_t, 40> w160;
  alignas(16) static std::array<uint8_t, 4800> w161;
  alignas(16) static std::array<int32_t, 120> w162;
  alignas(16) static std::array<uint8_t, 3000> w163;
  alignas(16) static std::array<int32_t, 120> w164;
  alignas(16) static std::array<uint8_t, 3840> w165;
  alignas(16) static std::array<int32_t, 32> w166;
  alignas(16) static std::array<uint8_t, 3840> w167;
  alignas(16) static std::array<int32_t, 120> w168;
  alignas(16) static std::array<uint8_t, 1> w169;
  alignas(16) static std::array<uint8_t, 1> w170;
  alignas(16) static std::array<uint8_t, 4800> w171;
  alignas(16) static std::array<int32_t, 40> w172;
  alignas(16) static std::array<uint8_t, 4800> w173;
  alignas(16) static std::array<int32_t, 120> w174;
  alignas(16) static std::array<uint8_t, 3000> w175;
  alignas(16) static std::array<int32_t, 120> w176;
  alignas(16) static std::array<uint8_t, 3840> w177;
  alignas(16) static std::array<int32_t, 32> w178;
  alignas(16) static std::array<uint8_t, 3840> w179;
  alignas(16) static std::array<int32_t, 120> w180;
  alignas(16) static std::array<uint8_t, 1> w181;
  alignas(16) static std::array<uint8_t, 1> w182;
  alignas(16) static std::array<uint8_t, 4800> w183;
  alignas(16) static std::array<int32_t, 40> w184;
  alignas(16) static std::array<uint8_t, 9600> w185;
  alignas(16) static std::array<int32_t, 240> w186;
  alignas(16) static std::array<uint8_t, 2160> w187;
  alignas(16) static std::array<int32_t, 240> w188;
  alignas(16) static std::array<uint8_t, 19200> w189;
  alignas(16) static std::array<int32_t, 80> w190;
  alignas(16) static std::array<uint8_t, 16000> w191;
  alignas(16) static std::array<int32_t, 200> w192;
  alignas(16) static std::array<uint8_t, 1800> w193;
  alignas(16) static std::array<int32_t, 200> w194;
  alignas(16) static std::array<uint8_t, 16000> w195;
  alignas(16) static std::array<int32_t, 80> w196;
  alignas(16) static std::array<uint8_t, 14720> w197;
  alignas(16) static std::array<int32_t, 184> w198;
  alignas(16) static std::array<uint8_t, 1656> w199;
  alignas(16) static std::array<int32_t, 184> w200;
  alignas(16) static std::array<uint8_t, 14720> w201;
  alignas(16) static std::array<int32_t, 80> w202;
  alignas(16) static std::array<uint8_t, 14720> w203;
  alignas(16) static std::array<int32_t, 184> w204;
  alignas(16) static std::array<uint8_t, 1656> w205;
  alignas(16) static std::array<int32_t, 184> w206;
  alignas(16) static std::array<uint8_t, 14720> w207;
  alignas(16) static std::array<int32_t, 80> w208;
  alignas(16) static std::array<uint8_t, 38400> w209;
  alignas(16) static std::array<int32_t, 480> w210;
  alignas(16) static std::array<uint8_t, 4320> w211;
  alignas(16) static std::array<int32_t, 480> w212;
  alignas(16) static std::array<uint8_t, 57600> w213;
  alignas(16) static std::array<int32_t, 120> w214;
  alignas(16) static std::array<uint8_t, 57600> w215;
  alignas(16) static std::array<int32_t, 480> w216;
  alignas(16) static std::array<uint8_t, 1> w217;
  alignas(16) static std::array<uint8_t, 1> w218;
  alignas(16) static std::array<uint8_t, 53760> w219;
  alignas(16) static std::array<int32_t, 112> w220;
  alignas(16) static std::array<uint8_t, 75264> w221;
  alignas(16) static std::array<int32_t, 672> w222;
  alignas(16) static std::array<uint8_t, 6048> w223;
  alignas(16) static std::array<int32_t, 672> w224;
  alignas(16) static std::array<uint8_t, 112896> w225;
  alignas(16) static std::array<int32_t, 168> w226;
  alignas(16) static std::array<uint8_t, 112896> w227;
  alignas(16) static std::array<int32_t, 672> w228;
  alignas(16) static std::array<uint8_t, 1> w229;
  alignas(16) static std::array<uint8_t, 1> w230;
  alignas(16) static std::array<uint8_t, 75264> w231;
  alignas(16) static std::array<int32_t, 112> w232;
  alignas(16) static std::array<uint8_t, 75264> w233;
  alignas(16) static std::array<int32_t, 672> w234;
  alignas(16) static std::array<uint8_t, 16800> w235;
  alignas(16) static std::array<int32_t, 672> w236;
  alignas(16) static std::array<uint8_t, 112896> w237;
  alignas(16) static std::array<int32_t, 168> w238;
  alignas(16) static std::array<uint8_t, 112896> w239;
  alignas(16) static std::array<int32_t, 672> w240;
  alignas(16) static std::array<uint8_t, 1> w241;
  alignas(16) static std::array<uint8_t, 1> w242;
  alignas(16) static std::array<uint8_t, 107520> w243;
  alignas(16) static std::array<int32_t, 160> w244;
  alignas(16) static std::array<uint8_t, 153600> w245;
  alignas(16) static std::array<int32_t, 960> w246;
  alignas(16) static std::array<uint8_t, 24000> w247;
  alignas(16) static std::array<int32_t, 960> w248;
  alignas(16) static std::array<uint8_t, 230400> w249;
  alignas(16) static std::array<int32_t, 240> w250;
  alignas(16) static std::array<uint8_t, 230400> w251;
  alignas(16) static std::array<int32_t, 960> w252;
  alignas(16) static std::array<uint8_t, 1> w253;
  alignas(16) static std::array<uint8_t, 1> w254;
  alignas(16) static std::array<uint8_t, 153600> w255;
  alignas(16) static std::array<int32_t, 160> w256;
  alignas(16) static std::array<uint8_t, 153600> w257;
  alignas(16) static std::array<int32_t, 960> w258;
  alignas(16) static std::array<uint8_t, 24000> w259;
  alignas(16) static std::array<int32_t, 960> w260;
  alignas(16) static std::array<uint8_t, 230400> w261;
  alignas(16) static std::array<int32_t, 240> w262;
  alignas(16) static std::array<uint8_t, 230400> w263;
  alignas(16) static std::array<int32_t, 960> w264;
  alignas(16) static std::array<uint8_t, 1> w265;
  alignas(16) static std::array<uint8_t, 1> w266;
  alignas(16) static std::array<uint8_t, 153600> w267;
  alignas(16) static std::array<int32_t, 160> w268;
  alignas(16) static std::array<uint8_t, 153600> w269;
  alignas(16) static std::array<int32_t, 960> w270;
  alignas(16) static std::array<uint8_t, 1228800> w271;
  alignas(16) static std::array<int32_t, 1280> w272;
  alignas(16) static std::array<uint8_t, 1281280> w273;
  alignas(16) static std::array<int32_t, 1001> w274;
  std::random_device random_device;
  auto rng = std::mt19937(random_device());
  auto qu8rng = std::bind(std::uniform_int_distribution<int>(std::numeric_limits<uint8_t>::min(), std::numeric_limits<uint8_t>::max()), std::ref(rng));
  auto qs32rng = std::bind(std::uniform_int_distribution<int>(-10000, 10000), std::ref(rng));
  std::generate(v0.begin(), v0.end(), std::ref(qu8rng));
  std::generate(v1.begin(), v1.end(), std::ref(qu8rng));
  std::generate(v2.begin(), v2.end(), std::ref(qu8rng));
  std::generate(v3.begin(), v3.end(), std::ref(qu8rng));
  std::generate(v4.begin(), v4.end(), std::ref(qu8rng));
  std::generate(v5.begin(), v5.end(), std::ref(qu8rng));
  std::generate(v6.begin(), v6.end(), std::ref(qu8rng));
  std::generate(v7.begin(), v7.end(), std::ref(qu8rng));
  std::generate(v8.begin(), v8.end(), std::ref(qu8rng));
  std::generate(v9.begin(), v9.end(), std::ref(qu8rng));
  std::generate(v10.begin(), v10.end(), std::ref(qu8rng));
  std::generate(v11.begin(), v11.end(), std::ref(qu8rng));
  std::generate(v12.begin(), v12.end(), std::ref(qu8rng));
  std::generate(v13.begin(), v13.end(), std::ref(qu8rng));
  std::generate(v14.begin(), v14.end(), std::ref(qu8rng));
  std::generate(v15.begin(), v15.end(), std::ref(qu8rng));
  std::generate(v16.begin(), v16.end(), std::ref(qu8rng));
  std::generate(v17.begin(), v17.end(), std::ref(qu8rng));
  std::generate(v18.begin(), v18.end(), std::ref(qu8rng));
  std::generate(v19.begin(), v19.end(), std::ref(qu8rng));
  std::generate(v20.begin(), v20.end(), std::ref(qu8rng));
  std::generate(v21.begin(), v21.end(), std::ref(qu8rng));
  std::generate(v22.begin(), v22.end(), std::ref(qu8rng));
  std::generate(v23.begin(), v23.end(), std::ref(qu8rng));
  std::generate(v24.begin(), v24.end(), std::ref(qu8rng));
  std::generate(v25.begin(), v25.end(), std::ref(qu8rng));
  std::generate(v26.begin(), v26.end(), std::ref(qu8rng));
  std::generate(v27.begin(), v27.end(), std::ref(qu8rng));
  std::generate(v28.begin(), v28.end(), std::ref(qu8rng));
  std::generate(v29.begin(), v29.end(), std::ref(qu8rng));
  std::generate(v30.begin(), v30.end(), std::ref(qu8rng));
  std::generate(v31.begin(), v31.end(), std::ref(qu8rng));
  std::generate(v32.begin(), v32.end(), std::ref(qu8rng));
  std::generate(v33.begin(), v33.end(), std::ref(qu8rng));
  std::generate(v34.begin(), v34.end(), std::ref(qu8rng));
  std::generate(v35.begin(), v35.end(), std::ref(qu8rng));
  std::generate(v36.begin(), v36.end(), std::ref(qu8rng));
  std::generate(v37.begin(), v37.end(), std::ref(qu8rng));
  std::generate(v38.begin(), v38.end(), std::ref(qu8rng));
  std::generate(v39.begin(), v39.end(), std::ref(qu8rng));
  std::generate(v40.begin(), v40.end(), std::ref(qu8rng));
  std::generate(v41.begin(), v41.end(), std::ref(qu8rng));
  std::generate(v42.begin(), v42.end(), std::ref(qu8rng));
  std::generate(v43.begin(), v43.end(), std::ref(qu8rng));
  std::generate(v44.begin(), v44.end(), std::ref(qu8rng));
  std::generate(v45.begin(), v45.end(), std::ref(qu8rng));
  std::generate(v46.begin(), v46.end(), std::ref(qu8rng));
  std::generate(v47.begin(), v47.end(), std::ref(qu8rng));
  std::generate(v48.begin(), v48.end(), std::ref(qu8rng));
  std::generate(v49.begin(), v49.end(), std::ref(qu8rng));
  std::generate(v50.begin(), v50.end(), std::ref(qu8rng));
  std::generate(v51.begin(), v51.end(), std::ref(qu8rng));
  std::generate(v52.begin(), v52.end(), std::ref(qu8rng));
  std::generate(v53.begin(), v53.end(), std::ref(qu8rng));
  std::generate(v54.begin(), v54.end(), std::ref(qu8rng));
  std::generate(v55.begin(), v55.end(), std::ref(qu8rng));
  std::generate(v56.begin(), v56.end(), std::ref(qu8rng));
  std::generate(v57.begin(), v57.end(), std::ref(qu8rng));
  std::generate(v58.begin(), v58.end(), std::ref(qu8rng));
  std::generate(v59.begin(), v59.end(), std::ref(qu8rng));
  std::generate(v60.begin(), v60.end(), std::ref(qu8rng));
  std::generate(v61.begin(), v61.end(), std::ref(qu8rng));
  std::generate(v62.begin(), v62.end(), std::ref(qu8rng));
  std::generate(v63.begin(), v63.end(), std::ref(qu8rng));
  std::generate(v64.begin(), v64.end(), std::ref(qu8rng));
  std::generate(v65.begin(), v65.end(), std::ref(qu8rng));
  std::generate(v66.begin(), v66.end(), std::ref(qu8rng));
  std::generate(v67.begin(), v67.end(), std::ref(qu8rng));
  std::generate(v68.begin(), v68.end(), std::ref(qu8rng));
  std::generate(v69.begin(), v69.end(), std::ref(qu8rng));
  std::generate(v70.begin(), v70.end(), std::ref(qu8rng));
  std::generate(v71.begin(), v71.end(), std::ref(qu8rng));
  std::generate(v72.begin(), v72.end(), std::ref(qu8rng));
  std::generate(v73.begin(), v73.end(), std::ref(qu8rng));
  std::generate(v74.begin(), v74.end(), std::ref(qu8rng));
  std::generate(v75.begin(), v75.end(), std::ref(qu8rng));
  std::generate(v76.begin(), v76.end(), std::ref(qu8rng));
  std::generate(v77.begin(), v77.end(), std::ref(qu8rng));
  std::generate(v78.begin(), v78.end(), std::ref(qu8rng));
  std::generate(v79.begin(), v79.end(), std::ref(qu8rng));
  std::generate(v80.begin(), v80.end(), std::ref(qu8rng));
  std::generate(v81.begin(), v81.end(), std::ref(qu8rng));
  std::generate(v82.begin(), v82.end(), std::ref(qu8rng));
  std::generate(v83.begin(), v83.end(), std::ref(qu8rng));
  std::generate(v84.begin(), v84.end(), std::ref(qu8rng));
  std::generate(v85.begin(), v85.end(), std::ref(qu8rng));
  std::generate(v86.begin(), v86.end(), std::ref(qu8rng));
  std::generate(v87.begin(), v87.end(), std::ref(qu8rng));
  std::generate(v88.begin(), v88.end(), std::ref(qu8rng));
  std::generate(v89.begin(), v89.end(), std::ref(qu8rng));
  std::generate(v90.begin(), v90.end(), std::ref(qu8rng));
  std::generate(v91.begin(), v91.end(), std::ref(qu8rng));
  std::generate(v92.begin(), v92.end(), std::ref(qu8rng));
  std::generate(v93.begin(), v93.end(), std::ref(qu8rng));
  std::generate(v94.begin(), v94.end(), std::ref(qu8rng));
  std::generate(v95.begin(), v95.end(), std::ref(qu8rng));
  std::generate(v96.begin(), v96.end(), std::ref(qu8rng));
  std::generate(v97.begin(), v97.end(), std::ref(qu8rng));
  std::generate(v98.begin(), v98.end(), std::ref(qu8rng));
  std::generate(v99.begin(), v99.end(), std::ref(qu8rng));
  std::generate(v100.begin(), v100.end(), std::ref(qu8rng));
  std::generate(v101.begin(), v101.end(), std::ref(qu8rng));
  std::generate(v102.begin(), v102.end(), std::ref(qu8rng));
  std::generate(v103.begin(), v103.end(), std::ref(qu8rng));
  std::generate(v104.begin(), v104.end(), std::ref(qu8rng));
  std::generate(v105.begin(), v105.end(), std::ref(qu8rng));
  std::generate(v106.begin(), v106.end(), std::ref(qu8rng));
  std::generate(v107.begin(), v107.end(), std::ref(qu8rng));
  std::generate(v108.begin(), v108.end(), std::ref(qu8rng));
  std::generate(v109.begin(), v109.end(), std::ref(qu8rng));
  std::generate(v110.begin(), v110.end(), std::ref(qu8rng));
  std::generate(v111.begin(), v111.end(), std::ref(qu8rng));
  std::generate(v112.begin(), v112.end(), std::ref(qu8rng));
  std::generate(v113.begin(), v113.end(), std::ref(qu8rng));
  std::generate(v114.begin(), v114.end(), std::ref(qu8rng));
  std::generate(v115.begin(), v115.end(), std::ref(qu8rng));
  std::generate(v116.begin(), v116.end(), std::ref(qu8rng));
  std::generate(v117.begin(), v117.end(), std::ref(qu8rng));
  std::generate(v118.begin(), v118.end(), std::ref(qu8rng));
  std::generate(v119.begin(), v119.end(), std::ref(qu8rng));
  std::generate(v120.begin(), v120.end(), std::ref(qu8rng));
  std::generate(v121.begin(), v121.end(), std::ref(qu8rng));
  std::generate(v122.begin(), v122.end(), std::ref(qu8rng));
  std::generate(v123.begin(), v123.end(), std::ref(qu8rng));
  std::generate(v124.begin(), v124.end(), std::ref(qu8rng));
  std::generate(v125.begin(), v125.end(), std::ref(qu8rng));
  std::generate(v126.begin(), v126.end(), std::ref(qu8rng));
  std::generate(v127.begin(), v127.end(), std::ref(qu8rng));
  std::generate(v128.begin(), v128.end(), std::ref(qu8rng));
  std::generate(v129.begin(), v129.end(), std::ref(qu8rng));
  std::generate(v130.begin(), v130.end(), std::ref(qu8rng));
  std::generate(w131.begin(), w131.end(), std::ref(qu8rng));
  std::generate(w132.begin(), w132.end(), std::ref(qs32rng));
  std::generate(w133.begin(), w133.end(), std::ref(qu8rng));
  std::generate(w134.begin(), w134.end(), std::ref(qs32rng));
  std::generate(w135.begin(), w135.end(), std::ref(qu8rng));
  std::generate(w136.begin(), w136.end(), std::ref(qs32rng));
  std::generate(w137.begin(), w137.end(), std::ref(qu8rng));
  std::generate(w138.begin(), w138.end(), std::ref(qs32rng));
  std::generate(w139.begin(), w139.end(), std::ref(qu8rng));
  std::generate(w140.begin(), w140.end(), std::ref(qs32rng));
  std::generate(w141.begin(), w141.end(), std::ref(qu8rng));
  std::generate(w142.begin(), w142.end(), std::ref(qs32rng));
  std::generate(w143.begin(), w143.end(), std::ref(qu8rng));
  std::generate(w144.begin(), w144.end(), std::ref(qs32rng));
  std::generate(w145.begin(), w145.end(), std::ref(qu8rng));
  std::generate(w146.begin(), w146.end(), std::ref(qs32rng));
  std::generate(w147.begin(), w147.end(), std::ref(qu8rng));
  std::generate(w148.begin(), w148.end(), std::ref(qs32rng));
  std::generate(w149.begin(), w149.end(), std::ref(qu8rng));
  std::generate(w150.begin(), w150.end(), std::ref(qs32rng));
  std::generate(w151.begin(), w151.end(), std::ref(qu8rng));
  std::generate(w152.begin(), w152.end(), std::ref(qs32rng));
  std::generate(w153.begin(), w153.end(), std::ref(qu8rng));
  std::generate(w154.begin(), w154.end(), std::ref(qs32rng));
  std::generate(w155.begin(), w155.end(), std::ref(qu8rng));
  std::generate(w156.begin(), w156.end(), std::ref(qs32rng));
  std::generate(w157.begin(), w157.end(), std::ref(qu8rng));
  std::generate(w158.begin(), w158.end(), std::ref(qu8rng));
  std::generate(w159.begin(), w159.end(), std::ref(qu8rng));
  std::generate(w160.begin(), w160.end(), std::ref(qs32rng));
  std::generate(w161.begin(), w161.end(), std::ref(qu8rng));
  std::generate(w162.begin(), w162.end(), std::ref(qs32rng));
  std::generate(w163.begin(), w163.end(), std::ref(qu8rng));
  std::generate(w164.begin(), w164.end(), std::ref(qs32rng));
  std::generate(w165.begin(), w165.end(), std::ref(qu8rng));
  std::generate(w166.begin(), w166.end(), std::ref(qs32rng));
  std::generate(w167.begin(), w167.end(), std::ref(qu8rng));
  std::generate(w168.begin(), w168.end(), std::ref(qs32rng));
  std::generate(w169.begin(), w169.end(), std::ref(qu8rng));
  std::generate(w170.begin(), w170.end(), std::ref(qu8rng));
  std::generate(w171.begin(), w171.end(), std::ref(qu8rng));
  std::generate(w172.begin(), w172.end(), std::ref(qs32rng));
  std::generate(w173.begin(), w173.end(), std::ref(qu8rng));
  std::generate(w174.begin(), w174.end(), std::ref(qs32rng));
  std::generate(w175.begin(), w175.end(), std::ref(qu8rng));
  std::generate(w176.begin(), w176.end(), std::ref(qs32rng));
  std::generate(w177.begin(), w177.end(), std::ref(qu8rng));
  std::generate(w178.begin(), w178.end(), std::ref(qs32rng));
  std::generate(w179.begin(), w179.end(), std::ref(qu8rng));
  std::generate(w180.begin(), w180.end(), std::ref(qs32rng));
  std::generate(w181.begin(), w181.end(), std::ref(qu8rng));
  std::generate(w182.begin(), w182.end(), std::ref(qu8rng));
  std::generate(w183.begin(), w183.end(), std::ref(qu8rng));
  std::generate(w184.begin(), w184.end(), std::ref(qs32rng));
  std::generate(w185.begin(), w185.end(), std::ref(qu8rng));
  std::generate(w186.begin(), w186.end(), std::ref(qs32rng));
  std::generate(w187.begin(), w187.end(), std::ref(qu8rng));
  std::generate(w188.begin(), w188.end(), std::ref(qs32rng));
  std::generate(w189.begin(), w189.end(), std::ref(qu8rng));
  std::generate(w190.begin(), w190.end(), std::ref(qs32rng));
  std::generate(w191.begin(), w191.end(), std::ref(qu8rng));
  std::generate(w192.begin(), w192.end(), std::ref(qs32rng));
  std::generate(w193.begin(), w193.end(), std::ref(qu8rng));
  std::generate(w194.begin(), w194.end(), std::ref(qs32rng));
  std::generate(w195.begin(), w195.end(), std::ref(qu8rng));
  std::generate(w196.begin(), w196.end(), std::ref(qs32rng));
  std::generate(w197.begin(), w197.end(), std::ref(qu8rng));
  std::generate(w198.begin(), w198.end(), std::ref(qs32rng));
  std::generate(w199.begin(), w199.end(), std::ref(qu8rng));
  std::generate(w200.begin(), w200.end(), std::ref(qs32rng));
  std::generate(w201.begin(), w201.end(), std::ref(qu8rng));
  std::generate(w202.begin(), w202.end(), std::ref(qs32rng));
  std::generate(w203.begin(), w203.end(), std::ref(qu8rng));
  std::generate(w204.begin(), w204.end(), std::ref(qs32rng));
  std::generate(w205.begin(), w205.end(), std::ref(qu8rng));
  std::generate(w206.begin(), w206.end(), std::ref(qs32rng));
  std::generate(w207.begin(), w207.end(), std::ref(qu8rng));
  std::generate(w208.begin(), w208.end(), std::ref(qs32rng));
  std::generate(w209.begin(), w209.end(), std::ref(qu8rng));
  std::generate(w210.begin(), w210.end(), std::ref(qs32rng));
  std::generate(w211.begin(), w211.end(), std::ref(qu8rng));
  std::generate(w212.begin(), w212.end(), std::ref(qs32rng));
  std::generate(w213.begin(), w213.end(), std::ref(qu8rng));
  std::generate(w214.begin(), w214.end(), std::ref(qs32rng));
  std::generate(w215.begin(), w215.end(), std::ref(qu8rng));
  std::generate(w216.begin(), w216.end(), std::ref(qs32rng));
  std::generate(w217.begin(), w217.end(), std::ref(qu8rng));
  std::generate(w218.begin(), w218.end(), std::ref(qu8rng));
  std::generate(w219.begin(), w219.end(), std::ref(qu8rng));
  std::generate(w220.begin(), w220.end(), std::ref(qs32rng));
  std::generate(w221.begin(), w221.end(), std::ref(qu8rng));
  std::generate(w222.begin(), w222.end(), std::ref(qs32rng));
  std::generate(w223.begin(), w223.end(), std::ref(qu8rng));
  std::generate(w224.begin(), w224.end(), std::ref(qs32rng));
  std::generate(w225.begin(), w225.end(), std::ref(qu8rng));
  std::generate(w226.begin(), w226.end(), std::ref(qs32rng));
  std::generate(w227.begin(), w227.end(), std::ref(qu8rng));
  std::generate(w228.begin(), w228.end(), std::ref(qs32rng));
  std::generate(w229.begin(), w229.end(), std::ref(qu8rng));
  std::generate(w230.begin(), w230.end(), std::ref(qu8rng));
  std::generate(w231.begin(), w231.end(), std::ref(qu8rng));
  std::generate(w232.begin(), w232.end(), std::ref(qs32rng));
  std::generate(w233.begin(), w233.end(), std::ref(qu8rng));
  std::generate(w234.begin(), w234.end(), std::ref(qs32rng));
  std::generate(w235.begin(), w235.end(), std::ref(qu8rng));
  std::generate(w236.begin(), w236.end(), std::ref(qs32rng));
  std::generate(w237.begin(), w237.end(), std::ref(qu8rng));
  std::generate(w238.begin(), w238.end(), std::ref(qs32rng));
  std::generate(w239.begin(), w239.end(), std::ref(qu8rng));
  std::generate(w240.begin(), w240.end(), std::ref(qs32rng));
  std::generate(w241.begin(), w241.end(), std::ref(qu8rng));
  std::generate(w242.begin(), w242.end(), std::ref(qu8rng));
  std::generate(w243.begin(), w243.end(), std::ref(qu8rng));
  std::generate(w244.begin(), w244.end(), std::ref(qs32rng));
  std::generate(w245.begin(), w245.end(), std::ref(qu8rng));
  std::generate(w246.begin(), w246.end(), std::ref(qs32rng));
  std::generate(w247.begin(), w247.end(), std::ref(qu8rng));
  std::generate(w248.begin(), w248.end(), std::ref(qs32rng));
  std::generate(w249.begin(), w249.end(), std::ref(qu8rng));
  std::generate(w250.begin(), w250.end(), std::ref(qs32rng));
  std::generate(w251.begin(), w251.end(), std::ref(qu8rng));
  std::generate(w252.begin(), w252.end(), std::ref(qs32rng));
  std::generate(w253.begin(), w253.end(), std::ref(qu8rng));
  std::generate(w254.begin(), w254.end(), std::ref(qu8rng));
  std::generate(w255.begin(), w255.end(), std::ref(qu8rng));
  std::generate(w256.begin(), w256.end(), std::ref(qs32rng));
  std::generate(w257.begin(), w257.end(), std::ref(qu8rng));
  std::generate(w258.begin(), w258.end(), std::ref(qs32rng));
  std::generate(w259.begin(), w259.end(), std::ref(qu8rng));
  std::generate(w260.begin(), w260.end(), std::ref(qs32rng));
  std::generate(w261.begin(), w261.end(), std::ref(qu8rng));
  std::generate(w262.begin(), w262.end(), std::ref(qs32rng));
  std::generate(w263.begin(), w263.end(), std::ref(qu8rng));
  std::generate(w264.begin(), w264.end(), std::ref(qs32rng));
  std::generate(w265.begin(), w265.end(), std::ref(qu8rng));
  std::generate(w266.begin(), w266.end(), std::ref(qu8rng));
  std::generate(w267.begin(), w267.end(), std::ref(qu8rng));
  std::generate(w268.begin(), w268.end(), std::ref(qs32rng));
  std::generate(w269.begin(), w269.end(), std::ref(qu8rng));
  std::generate(w270.begin(), w270.end(), std::ref(qs32rng));
  std::generate(w271.begin(), w271.end(), std::ref(qu8rng));
  std::generate(w272.begin(), w272.end(), std::ref(qs32rng));
  std::generate(w273.begin(), w273.end(), std::ref(qu8rng));
  std::generate(w274.begin(), w274.end(), std::ref(qs32rng));

  Operators operators;
  xnn_status status;
  size_t max_workspace_size = 0;

  xnn_operator_t op0 = nullptr;
  status = xnn_create_convolution2d_nhwc_qu8(
    0 /* top padding */, 1 /* right padding */,
    1 /* bottom padding */, 0 /* left padding */,
    3 /* kernel height */, 3 /* kernel width */,
    2 /* subsampling height */, 2 /* subsampling width */,
    1 /* dilation_height */, 1 /* dilation_width */,
    1 /* groups */,
    3 /* input channels per group */,
    16 /* output_channels_per_group */,
    3 /* input pixel stride */,
    16 /* output pixel stride */,
    (uint8_t) 128 /* input_zero_point */,
    0.007874015718698502 /* input_scale */,
    (uint8_t) 115 /* kernel_zero_point */,
    0.033770088106393814 /* kernel_scale */,
    w131.data(), w132.data(),
    (uint8_t) 118 /* output_zero_point */,
    0.27370360493659973 /* output_scale */,
    (uint8_t) 0 /* output min */,  (uint8_t) 255 /* output max */,
    0 /* flags */,
    nullptr /* code_cache */,
    nullptr /* weights_cache */,
    &op0);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #0" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op0, xnn_delete_operator);

  xnn_operator_t op1 = nullptr;
  status = xnn_create_copy_nc_x8(
    16 /* channels */,
    16 /* input stride */,
    16 /* output stride */,
    0 /* flags */,
    &op1);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #1" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op1, xnn_delete_operator);

  xnn_operator_t op2 = nullptr;
  status = xnn_create_convolution2d_nhwc_qu8(
    1 /* top padding */, 1 /* right padding */,
    1 /* bottom padding */, 1 /* left padding */,
    3 /* kernel height */, 3 /* kernel width */,
    1 /* subsampling height */, 1 /* subsampling width */,
    1 /* dilation_height */, 1 /* dilation_width */,
    16 /* groups */,
    1 /* input channels per group */,
    1 /* output_channels_per_group */,
    16 /* input pixel stride */,
    16 /* output pixel stride */,
    (uint8_t) 3 /* input_zero_point */,
    0.14285412430763245 /* input_scale */,
    (uint8_t) 180 /* kernel_zero_point */,
    1.2274280786514282 /* kernel_scale */,
    w133.data(), w134.data(),
    (uint8_t) 0 /* output_zero_point */,
    0.48894554376602173 /* output_scale */,
    (uint8_t) 0 /* output min */,  (uint8_t) 255 /* output max */,
    0 /* flags */,
    nullptr /* code_cache */,
    nullptr /* weights_cache */,
    &op2);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #2" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op2, xnn_delete_operator);

  xnn_operator_t op3 = nullptr;
  status = xnn_create_convolution2d_nhwc_qu8(
    0 /* top padding */, 0 /* right padding */,
    0 /* bottom padding */, 0 /* left padding */,
    1 /* kernel height */, 1 /* kernel width */,
    1 /* subsampling height */, 1 /* subsampling width */,
    1 /* dilation_height */, 1 /* dilation_width */,
    1 /* groups */,
    16 /* input channels per group */,
    16 /* output_channels_per_group */,
    16 /* input pixel stride */,
    16 /* output pixel stride */,
    (uint8_t) 0 /* input_zero_point */,
    0.48894554376602173 /* input_scale */,
    (uint8_t) 117 /* kernel_zero_point */,
    0.003143413458019495 /* kernel_scale */,
    w135.data(), w136.data(),
    (uint8_t) 118 /* output_zero_point */,
    0.31826987862586975 /* output_scale */,
    (uint8_t) 0 /* output min */,  (uint8_t) 255 /* output max */,
    0 /* flags */,
    nullptr /* code_cache */,
    nullptr /* weights_cache */,
    &op3);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #3" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op3, xnn_delete_operator);

  xnn_operator_t op4 = nullptr;
  status = xnn_create_add_nd_qu8(
    118 /* input1 zero point */, 0.31826987862586975 /* input1 scale */,
    3 /* input2 zero point */, 0.14285412430763245 /* input2 scale */,
    110 /* output zero point */, 0.32081592082977295 /* output scale */,
    0 /* output min */, 255 /* output max */,
    0 /* flags */,
    &op4);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #4" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op4, xnn_delete_operator);

  xnn_operator_t op5 = nullptr;
  status = xnn_create_convolution2d_nhwc_qu8(
    0 /* top padding */, 0 /* right padding */,
    0 /* bottom padding */, 0 /* left padding */,
    1 /* kernel height */, 1 /* kernel width */,
    1 /* subsampling height */, 1 /* subsampling width */,
    1 /* dilation_height */, 1 /* dilation_width */,
    1 /* groups */,
    16 /* input channels per group */,
    64 /* output_channels_per_group */,
    16 /* input pixel stride */,
    64 /* output pixel stride */,
    (uint8_t) 110 /* input_zero_point */,
    0.32081592082977295 /* input_scale */,
    (uint8_t) 132 /* kernel_zero_point */,
    0.03118671104311943 /* kernel_scale */,
    w137.data(), w138.data(),
    (uint8_t) 0 /* output_zero_point */,
    0.6120059490203857 /* output_scale */,
    (uint8_t) 0 /* output min */,  (uint8_t) 255 /* output max */,
    0 /* flags */,
    nullptr /* code_cache */,
    nullptr /* weights_cache */,
    &op5);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #5" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op5, xnn_delete_operator);

  xnn_operator_t op6 = nullptr;
  status = xnn_create_convolution2d_nhwc_qu8(
    0 /* top padding */, 1 /* right padding */,
    1 /* bottom padding */, 0 /* left padding */,
    3 /* kernel height */, 3 /* kernel width */,
    2 /* subsampling height */, 2 /* subsampling width */,
    1 /* dilation_height */, 1 /* dilation_width */,
    64 /* groups */,
    1 /* input channels per group */,
    1 /* output_channels_per_group */,
    64 /* input pixel stride */,
    64 /* output pixel stride */,
    (uint8_t) 0 /* input_zero_point */,
    0.6120059490203857 /* input_scale */,
    (uint8_t) 121 /* kernel_zero_point */,
    0.026778604835271835 /* kernel_scale */,
    w139.data(), w140.data(),
    (uint8_t) 0 /* output_zero_point */,
    0.41203051805496216 /* output_scale */,
    (uint8_t) 0 /* output min */,  (uint8_t) 255 /* output max */,
    0 /* flags */,
    nullptr /* code_cache */,
    nullptr /* weights_cache */,
    &op6);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #6" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op6, xnn_delete_operator);

  xnn_operator_t op7 = nullptr;
  status = xnn_create_convolution2d_nhwc_qu8(
    0 /* top padding */, 0 /* right padding */,
    0 /* bottom padding */, 0 /* left padding */,
    1 /* kernel height */, 1 /* kernel width */,
    1 /* subsampling height */, 1 /* subsampling width */,
    1 /* dilation_height */, 1 /* dilation_width */,
    1 /* groups */,
    64 /* input channels per group */,
    24 /* output_channels_per_group */,
    64 /* input pixel stride */,
    24 /* output pixel stride */,
    (uint8_t) 0 /* input_zero_point */,
    0.41203051805496216 /* input_scale */,
    (uint8_t) 133 /* kernel_zero_point */,
    0.01140664890408516 /* kernel_scale */,
    w141.data(), w142.data(),
    (uint8_t) 98 /* output_zero_point */,
    0.7137808203697205 /* output_scale */,
    (uint8_t) 0 /* output min */,  (uint8_t) 255 /* output max */,
    0 /* flags */,
    nullptr /* code_cache */,
    nullptr /* weights_cache */,
    &op7);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #7" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op7, xnn_delete_operator);

  xnn_operator_t op8 = nullptr;
  status = xnn_create_convolution2d_nhwc_qu8(
    0 /* top padding */, 0 /* right padding */,
    0 /* bottom padding */, 0 /* left padding */,
    1 /* kernel height */, 1 /* kernel width */,
    1 /* subsampling height */, 1 /* subsampling width */,
    1 /* dilation_height */, 1 /* dilation_width */,
    1 /* groups */,
    24 /* input channels per group */,
    72 /* output_channels_per_group */,
    24 /* input pixel stride */,
    72 /* output pixel stride */,
    (uint8_t) 98 /* input_zero_point */,
    0.7137808203697205 /* input_scale */,
    (uint8_t) 134 /* kernel_zero_point */,
    0.0028549986891448498 /* kernel_scale */,
    w143.data(), w144.data(),
    (uint8_t) 0 /* output_zero_point */,
    0.17176608741283417 /* output_scale */,
    (uint8_t) 0 /* output min */,  (uint8_t) 255 /* output max */,
    0 /* flags */,
    nullptr /* code_cache */,
    nullptr /* weights_cache */,
    &op8);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #8" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op8, xnn_delete_operator);

  xnn_operator_t op9 = nullptr;
  status = xnn_create_convolution2d_nhwc_qu8(
    1 /* top padding */, 1 /* right padding */,
    1 /* bottom padding */, 1 /* left padding */,
    3 /* kernel height */, 3 /* kernel width */,
    1 /* subsampling height */, 1 /* subsampling width */,
    1 /* dilation_height */, 1 /* dilation_width */,
    72 /* groups */,
    1 /* input channels per group */,
    1 /* output_channels_per_group */,
    72 /* input pixel stride */,
    72 /* output pixel stride */,
    (uint8_t) 0 /* input_zero_point */,
    0.17176608741283417 /* input_scale */,
    (uint8_t) 84 /* kernel_zero_point */,
    0.05291542783379555 /* kernel_scale */,
    w145.data(), w146.data(),
    (uint8_t) 0 /* output_zero_point */,
    0.1972651332616806 /* output_scale */,
    (uint8_t) 0 /* output min */,  (uint8_t) 255 /* output max */,
    0 /* flags */,
    nullptr /* code_cache */,
    nullptr /* weights_cache */,
    &op9);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #9" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op9, xnn_delete_operator);

  xnn_operator_t op10 = nullptr;
  status = xnn_create_convolution2d_nhwc_qu8(
    0 /* top padding */, 0 /* right padding */,
    0 /* bottom padding */, 0 /* left padding */,
    1 /* kernel height */, 1 /* kernel width */,
    1 /* subsampling height */, 1 /* subsampling width */,
    1 /* dilation_height */, 1 /* dilation_width */,
    1 /* groups */,
    72 /* input channels per group */,
    24 /* output_channels_per_group */,
    72 /* input pixel stride */,
    24 /* output pixel stride */,
    (uint8_t) 0 /* input_zero_point */,
    0.1972651332616806 /* input_scale */,
    (uint8_t) 134 /* kernel_zero_point */,
    0.015823975205421448 /* kernel_scale */,
    w147.data(), w148.data(),
    (uint8_t) 128 /* output_zero_point */,
    0.7786163091659546 /* output_scale */,
    (uint8_t) 0 /* output min */,  (uint8_t) 255 /* output max */,
    0 /* flags */,
    nullptr /* code_cache */,
    nullptr /* weights_cache */,
    &op10);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #10" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op10, xnn_delete_operator);

  xnn_operator_t op11 = nullptr;
  status = xnn_create_add_nd_qu8(
    128 /* input1 zero point */, 0.7786163091659546 /* input1 scale */,
    98 /* input2 zero point */, 0.7137808203697205 /* input2 scale */,
    133 /* output zero point */, 0.8882708549499512 /* output scale */,
    0 /* output min */, 255 /* output max */,
    0 /* flags */,
    &op11);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #11" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op11, xnn_delete_operator);

  xnn_operator_t op12 = nullptr;
  status = xnn_create_convolution2d_nhwc_qu8(
    0 /* top padding */, 0 /* right padding */,
    0 /* bottom padding */, 0 /* left padding */,
    1 /* kernel height */, 1 /* kernel width */,
    1 /* subsampling height */, 1 /* subsampling width */,
    1 /* dilation_height */, 1 /* dilation_width */,
    1 /* groups */,
    24 /* input channels per group */,
    72 /* output_channels_per_group */,
    24 /* input pixel stride */,
    72 /* output pixel stride */,
    (uint8_t) 133 /* input_zero_point */,
    0.8882708549499512 /* input_scale */,
    (uint8_t) 110 /* kernel_zero_point */,
    0.0035069144796580076 /* kernel_scale */,
    w149.data(), w150.data(),
    (uint8_t) 0 /* output_zero_point */,
    0.16383449733257294 /* output_scale */,
    (uint8_t) 0 /* output min */,  (uint8_t) 255 /* output max */,
    0 /* flags */,
    nullptr /* code_cache */,
    nullptr /* weights_cache */,
    &op12);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #12" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op12, xnn_delete_operator);

  xnn_operator_t op13 = nullptr;
  status = xnn_create_convolution2d_nhwc_qu8(
    1 /* top padding */, 2 /* right padding */,
    2 /* bottom padding */, 1 /* left padding */,
    5 /* kernel height */, 5 /* kernel width */,
    2 /* subsampling height */, 2 /* subsampling width */,
    1 /* dilation_height */, 1 /* dilation_width */,
    72 /* groups */,
    1 /* input channels per group */,
    1 /* output_channels_per_group */,
    72 /* input pixel stride */,
    72 /* output pixel stride */,
    (uint8_t) 0 /* input_zero_point */,
    0.16383449733257294 /* input_scale */,
    (uint8_t) 172 /* kernel_zero_point */,
    0.0138913718983531 /* kernel_scale */,
    w151.data(), w152.data(),
    (uint8_t) 0 /* output_zero_point */,
    0.17515037953853607 /* output_scale */,
    (uint8_t) 0 /* output min */,  (uint8_t) 255 /* output max */,
    0 /* flags */,
    nullptr /* code_cache */,
    nullptr /* weights_cache */,
    &op13);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #13" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op13, xnn_delete_operator);

  xnn_operator_t op14 = nullptr;
  status = xnn_create_global_average_pooling_nwc_qu8(
    72 /* channels */, 72 /* input stride */, 72 /* output stride */,
    0 /* input zero point */, 0.17515037953853607 /* input scale */,
    0 /* output zero point */, 0.17515037953853607 /* output scale */,
    0 /* output min */, 255 /* output max */,
    0 /* flags */,
    &op14);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #14" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op14, xnn_delete_operator);

  xnn_operator_t op15 = nullptr;
  status = xnn_create_convolution2d_nhwc_qu8(
    0 /* top padding */, 0 /* right padding */,
    0 /* bottom padding */, 0 /* left padding */,
    1 /* kernel height */, 1 /* kernel width */,
    1 /* subsampling height */, 1 /* subsampling width */,
    1 /* dilation_height */, 1 /* dilation_width */,
    1 /* groups */,
    72 /* input channels per group */,
    24 /* output_channels_per_group */,
    72 /* input pixel stride */,
    24 /* output pixel stride */,
    (uint8_t) 0 /* input_zero_point */,
    0.17515037953853607 /* input_scale */,
    (uint8_t) 1 /* kernel_zero_point */,
    0.0003568351676221937 /* kernel_scale */,
    w153.data(), w154.data(),
    (uint8_t) 0 /* output_zero_point */,
    0.06370840221643448 /* output_scale */,
    (uint8_t) 0 /* output min */,  (uint8_t) 255 /* output max */,
    0 /* flags */,
    nullptr /* code_cache */,
    nullptr /* weights_cache */,
    &op15);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #15" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op15, xnn_delete_operator);

  xnn_operator_t op16 = nullptr;
  status = xnn_create_convolution2d_nhwc_qu8(
    0 /* top padding */, 0 /* right padding */,
    0 /* bottom padding */, 0 /* left padding */,
    1 /* kernel height */, 1 /* kernel width */,
    1 /* subsampling height */, 1 /* subsampling width */,
    1 /* dilation_height */, 1 /* dilation_width */,
    1 /* groups */,
    24 /* input channels per group */,
    72 /* output_channels_per_group */,
    24 /* input pixel stride */,
    72 /* output pixel stride */,
    (uint8_t) 0 /* input_zero_point */,
    0.06370840221643448 /* input_scale */,
    (uint8_t) 1 /* kernel_zero_point */,
    0.0005565338069573045 /* kernel_scale */,
    w155.data(), w156.data(),
    (uint8_t) 0 /* output_zero_point */,
    0.031534332782030106 /* output_scale */,
    (uint8_t) 0 /* output min */,  (uint8_t) 255 /* output max */,
    0 /* flags */,
    nullptr /* code_cache */,
    nullptr /* weights_cache */,
    &op16);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #16" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op16, xnn_delete_operator);

  xnn_operator_t op17 = nullptr;
  status = xnn_create_add_nd_qu8(
    0 /* input1 zero point */, 0.031534332782030106 /* input1 scale */,
    0 /* input2 zero point */, 0.0117647061124444 /* input2 scale */,
    0 /* output zero point */, 0.023528477177023888 /* output scale */,
    0 /* output min */, 255 /* output max */,
    0 /* flags */,
    &op17);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #17" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op17, xnn_delete_operator);

  xnn_operator_t op18 = nullptr;
  status = xnn_create_multiply_nd_qu8(
    0 /* input1 zero point */, 0.023528477177023888 /* input1 scale */,
    0 /* input2 zero point */, 0.0006536078290082514 /* input2 scale */,
    0 /* output zero point */, 0.003921507392078638 /* output scale */,
    0 /* output min */, 255 /* output max */,
    0 /* flags */,
    &op18);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #18" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op18, xnn_delete_operator);

  xnn_operator_t op19 = nullptr;
  status = xnn_create_multiply_nd_qu8(
    0 /* input1 zero point */, 0.17515037953853607 /* input1 scale */,
    0 /* input2 zero point */, 0.003921507392078638 /* input2 scale */,
    0 /* output zero point */, 0.16822829842567444 /* output scale */,
    0 /* output min */, 255 /* output max */,
    0 /* flags */,
    &op19);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #19" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op19, xnn_delete_operator);

  xnn_operator_t op20 = nullptr;
  status = xnn_create_convolution2d_nhwc_qu8(
    0 /* top padding */, 0 /* right padding */,
    0 /* bottom padding */, 0 /* left padding */,
    1 /* kernel height */, 1 /* kernel width */,
    1 /* subsampling height */, 1 /* subsampling width */,
    1 /* dilation_height */, 1 /* dilation_width */,
    1 /* groups */,
    72 /* input channels per group */,
    40 /* output_channels_per_group */,
    72 /* input pixel stride */,
    40 /* output pixel stride */,
    (uint8_t) 0 /* input_zero_point */,
    0.16822829842567444 /* input_scale */,
    (uint8_t) 137 /* kernel_zero_point */,
    0.012648322619497776 /* kernel_scale */,
    w159.data(), w160.data(),
    (uint8_t) 138 /* output_zero_point */,
    0.46539929509162903 /* output_scale */,
    (uint8_t) 0 /* output min */,  (uint8_t) 255 /* output max */,
    0 /* flags */,
    nullptr /* code_cache */,
    nullptr /* weights_cache */,
    &op20);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #20" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op20, xnn_delete_operator);

  xnn_operator_t op21 = nullptr;
  status = xnn_create_convolution2d_nhwc_qu8(
    0 /* top padding */, 0 /* right padding */,
    0 /* bottom padding */, 0 /* left padding */,
    1 /* kernel height */, 1 /* kernel width */,
    1 /* subsampling height */, 1 /* subsampling width */,
    1 /* dilation_height */, 1 /* dilation_width */,
    1 /* groups */,
    40 /* input channels per group */,
    120 /* output_channels_per_group */,
    40 /* input pixel stride */,
    120 /* output pixel stride */,
    (uint8_t) 138 /* input_zero_point */,
    0.46539929509162903 /* input_scale */,
    (uint8_t) 115 /* kernel_zero_point */,
    0.0016734388191252947 /* kernel_scale */,
    w161.data(), w162.data(),
    (uint8_t) 0 /* output_zero_point */,
    0.07927421480417252 /* output_scale */,
    (uint8_t) 0 /* output min */,  (uint8_t) 255 /* output max */,
    0 /* flags */,
    nullptr /* code_cache */,
    nullptr /* weights_cache */,
    &op21);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #21" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op21, xnn_delete_operator);

  xnn_operator_t op22 = nullptr;
  status = xnn_create_convolution2d_nhwc_qu8(
    2 /* top padding */, 2 /* right padding */,
    2 /* bottom padding */, 2 /* left padding */,
    5 /* kernel height */, 5 /* kernel width */,
    1 /* subsampling height */, 1 /* subsampling width */,
    1 /* dilation_height */, 1 /* dilation_width */,
    120 /* groups */,
    1 /* input channels per group */,
    1 /* output_channels_per_group */,
    120 /* input pixel stride */,
    120 /* output pixel stride */,
    (uint8_t) 0 /* input_zero_point */,
    0.07927421480417252 /* input_scale */,
    (uint8_t) 112 /* kernel_zero_point */,
    0.04146534577012062 /* kernel_scale */,
    w163.data(), w164.data(),
    (uint8_t) 0 /* output_zero_point */,
    0.29763659834861755 /* output_scale */,
    (uint8_t) 0 /* output min */,  (uint8_t) 255 /* output max */,
    0 /* flags */,
    nullptr /* code_cache */,
    nullptr /* weights_cache */,
    &op22);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #22" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op22, xnn_delete_operator);

  xnn_operator_t op23 = nullptr;
  status = xnn_create_global_average_pooling_nwc_qu8(
    120 /* channels */, 120 /* input stride */, 120 /* output stride */,
    0 /* input zero point */, 0.29763659834861755 /* input scale */,
    0 /* output zero point */, 0.29763659834861755 /* output scale */,
    0 /* output min */, 255 /* output max */,
    0 /* flags */,
    &op23);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #23" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op23, xnn_delete_operator);

  xnn_operator_t op24 = nullptr;
  status = xnn_create_convolution2d_nhwc_qu8(
    0 /* top padding */, 0 /* right padding */,
    0 /* bottom padding */, 0 /* left padding */,
    1 /* kernel height */, 1 /* kernel width */,
    1 /* subsampling height */, 1 /* subsampling width */,
    1 /* dilation_height */, 1 /* dilation_width */,
    1 /* groups */,
    120 /* input channels per group */,
    32 /* output_channels_per_group */,
    120 /* input pixel stride */,
    32 /* output pixel stride */,
    (uint8_t) 0 /* input_zero_point */,
    0.29763659834861755 /* input_scale */,
    (uint8_t) 154 /* kernel_zero_point */,
    0.010948714800179005 /* kernel_scale */,
    w165.data(), w166.data(),
    (uint8_t) 0 /* output_zero_point */,
    0.025719892233610153 /* output_scale */,
    (uint8_t) 0 /* output min */,  (uint8_t) 255 /* output max */,
    0 /* flags */,
    nullptr /* code_cache */,
    nullptr /* weights_cache */,
    &op24);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #24" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op24, xnn_delete_operator);

  xnn_operator_t op25 = nullptr;
  status = xnn_create_convolution2d_nhwc_qu8(
    0 /* top padding */, 0 /* right padding */,
    0 /* bottom padding */, 0 /* left padding */,
    1 /* kernel height */, 1 /* kernel width */,
    1 /* subsampling height */, 1 /* subsampling width */,
    1 /* dilation_height */, 1 /* dilation_width */,
    1 /* groups */,
    32 /* input channels per group */,
    120 /* output_channels_per_group */,
    32 /* input pixel stride */,
    120 /* output pixel stride */,
    (uint8_t) 0 /* input_zero_point */,
    0.025719892233610153 /* input_scale */,
    (uint8_t) 112 /* kernel_zero_point */,
    0.008170774206519127 /* kernel_scale */,
    w167.data(), w168.data(),
    (uint8_t) 146 /* output_zero_point */,
    0.04194885492324829 /* output_scale */,
    (uint8_t) 0 /* output min */,  (uint8_t) 255 /* output max */,
    0 /* flags */,
    nullptr /* code_cache */,
    nullptr /* weights_cache */,
    &op25);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #25" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op25, xnn_delete_operator);

  xnn_operator_t op26 = nullptr;
  status = xnn_create_add_nd_qu8(
    146 /* input1 zero point */, 0.04194885492324829 /* input1 scale */,
    0 /* input2 zero point */, 0.0117647061124444 /* input2 scale */,
    0 /* output zero point */, 0.023528477177023888 /* output scale */,
    0 /* output min */, 255 /* output max */,
    0 /* flags */,
    &op26);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #26" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op26, xnn_delete_operator);

  xnn_operator_t op27 = nullptr;
  status = xnn_create_multiply_nd_qu8(
    0 /* input1 zero point */, 0.023528477177023888 /* input1 scale */,
    0 /* input2 zero point */, 0.0006536078290082514 /* input2 scale */,
    0 /* output zero point */, 0.003921507392078638 /* output scale */,
    0 /* output min */, 255 /* output max */,
    0 /* flags */,
    &op27);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #27" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op27, xnn_delete_operator);

  xnn_operator_t op28 = nullptr;
  status = xnn_create_multiply_nd_qu8(
    0 /* input1 zero point */, 0.29763659834861755 /* input1 scale */,
    0 /* input2 zero point */, 0.003921507392078638 /* input2 scale */,
    0 /* output zero point */, 0.0508246049284935 /* output scale */,
    0 /* output min */, 255 /* output max */,
    0 /* flags */,
    &op28);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #28" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op28, xnn_delete_operator);

  xnn_operator_t op29 = nullptr;
  status = xnn_create_convolution2d_nhwc_qu8(
    0 /* top padding */, 0 /* right padding */,
    0 /* bottom padding */, 0 /* left padding */,
    1 /* kernel height */, 1 /* kernel width */,
    1 /* subsampling height */, 1 /* subsampling width */,
    1 /* dilation_height */, 1 /* dilation_width */,
    1 /* groups */,
    120 /* input channels per group */,
    40 /* output_channels_per_group */,
    120 /* input pixel stride */,
    40 /* output pixel stride */,
    (uint8_t) 0 /* input_zero_point */,
    0.0508246049284935 /* input_scale */,
    (uint8_t) 129 /* kernel_zero_point */,
    0.0810198038816452 /* kernel_scale */,
    w171.data(), w172.data(),
    (uint8_t) 123 /* output_zero_point */,
    0.38306790590286255 /* output_scale */,
    (uint8_t) 0 /* output min */,  (uint8_t) 255 /* output max */,
    0 /* flags */,
    nullptr /* code_cache */,
    nullptr /* weights_cache */,
    &op29);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #29" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op29, xnn_delete_operator);

  xnn_operator_t op30 = nullptr;
  status = xnn_create_add_nd_qu8(
    123 /* input1 zero point */, 0.38306790590286255 /* input1 scale */,
    138 /* input2 zero point */, 0.46539929509162903 /* input2 scale */,
    120 /* output zero point */, 0.5553078055381775 /* output scale */,
    0 /* output min */, 255 /* output max */,
    0 /* flags */,
    &op30);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #30" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op30, xnn_delete_operator);

  xnn_operator_t op31 = nullptr;
  status = xnn_create_convolution2d_nhwc_qu8(
    0 /* top padding */, 0 /* right padding */,
    0 /* bottom padding */, 0 /* left padding */,
    1 /* kernel height */, 1 /* kernel width */,
    1 /* subsampling height */, 1 /* subsampling width */,
    1 /* dilation_height */, 1 /* dilation_width */,
    1 /* groups */,
    40 /* input channels per group */,
    120 /* output_channels_per_group */,
    40 /* input pixel stride */,
    120 /* output pixel stride */,
    (uint8_t) 120 /* input_zero_point */,
    0.5553078055381775 /* input_scale */,
    (uint8_t) 112 /* kernel_zero_point */,
    0.0015208977274596691 /* kernel_scale */,
    w173.data(), w174.data(),
    (uint8_t) 0 /* output_zero_point */,
    0.07210717350244522 /* output_scale */,
    (uint8_t) 0 /* output min */,  (uint8_t) 255 /* output max */,
    0 /* flags */,
    nullptr /* code_cache */,
    nullptr /* weights_cache */,
    &op31);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #31" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op31, xnn_delete_operator);

  xnn_operator_t op32 = nullptr;
  status = xnn_create_convolution2d_nhwc_qu8(
    2 /* top padding */, 2 /* right padding */,
    2 /* bottom padding */, 2 /* left padding */,
    5 /* kernel height */, 5 /* kernel width */,
    1 /* subsampling height */, 1 /* subsampling width */,
    1 /* dilation_height */, 1 /* dilation_width */,
    120 /* groups */,
    1 /* input channels per group */,
    1 /* output_channels_per_group */,
    120 /* input pixel stride */,
    120 /* output pixel stride */,
    (uint8_t) 0 /* input_zero_point */,
    0.07210717350244522 /* input_scale */,
    (uint8_t) 100 /* kernel_zero_point */,
    0.08610404282808304 /* kernel_scale */,
    w175.data(), w176.data(),
    (uint8_t) 0 /* output_zero_point */,
    0.47602489590644836 /* output_scale */,
    (uint8_t) 0 /* output min */,  (uint8_t) 255 /* output max */,
    0 /* flags */,
    nullptr /* code_cache */,
    nullptr /* weights_cache */,
    &op32);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #32" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op32, xnn_delete_operator);

  xnn_operator_t op33 = nullptr;
  status = xnn_create_global_average_pooling_nwc_qu8(
    120 /* channels */, 120 /* input stride */, 120 /* output stride */,
    0 /* input zero point */, 0.47602489590644836 /* input scale */,
    0 /* output zero point */, 0.47602489590644836 /* output scale */,
    0 /* output min */, 255 /* output max */,
    0 /* flags */,
    &op33);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #33" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op33, xnn_delete_operator);

  xnn_operator_t op34 = nullptr;
  status = xnn_create_convolution2d_nhwc_qu8(
    0 /* top padding */, 0 /* right padding */,
    0 /* bottom padding */, 0 /* left padding */,
    1 /* kernel height */, 1 /* kernel width */,
    1 /* subsampling height */, 1 /* subsampling width */,
    1 /* dilation_height */, 1 /* dilation_width */,
    1 /* groups */,
    120 /* input channels per group */,
    32 /* output_channels_per_group */,
    120 /* input pixel stride */,
    32 /* output pixel stride */,
    (uint8_t) 0 /* input_zero_point */,
    0.47602489590644836 /* input_scale */,
    (uint8_t) 148 /* kernel_zero_point */,
    0.011198465712368488 /* kernel_scale */,
    w177.data(), w178.data(),
    (uint8_t) 0 /* output_zero_point */,
    0.018647782504558563 /* output_scale */,
    (uint8_t) 0 /* output min */,  (uint8_t) 255 /* output max */,
    0 /* flags */,
    nullptr /* code_cache */,
    nullptr /* weights_cache */,
    &op34);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #34" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op34, xnn_delete_operator);

  xnn_operator_t op35 = nullptr;
  status = xnn_create_convolution2d_nhwc_qu8(
    0 /* top padding */, 0 /* right padding */,
    0 /* bottom padding */, 0 /* left padding */,
    1 /* kernel height */, 1 /* kernel width */,
    1 /* subsampling height */, 1 /* subsampling width */,
    1 /* dilation_height */, 1 /* dilation_width */,
    1 /* groups */,
    32 /* input channels per group */,
    120 /* output_channels_per_group */,
    32 /* input pixel stride */,
    120 /* output pixel stride */,
    (uint8_t) 0 /* input_zero_point */,
    0.018647782504558563 /* input_scale */,
    (uint8_t) 123 /* kernel_zero_point */,
    0.007070987951010466 /* kernel_scale */,
    w179.data(), w180.data(),
    (uint8_t) 161 /* output_zero_point */,
    0.037593815475702286 /* output_scale */,
    (uint8_t) 0 /* output min */,  (uint8_t) 255 /* output max */,
    0 /* flags */,
    nullptr /* code_cache */,
    nullptr /* weights_cache */,
    &op35);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #35" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op35, xnn_delete_operator);

  xnn_operator_t op36 = nullptr;
  status = xnn_create_add_nd_qu8(
    161 /* input1 zero point */, 0.037593815475702286 /* input1 scale */,
    0 /* input2 zero point */, 0.0117647061124444 /* input2 scale */,
    0 /* output zero point */, 0.023528477177023888 /* output scale */,
    0 /* output min */, 255 /* output max */,
    0 /* flags */,
    &op36);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #36" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op36, xnn_delete_operator);

  xnn_operator_t op37 = nullptr;
  status = xnn_create_multiply_nd_qu8(
    0 /* input1 zero point */, 0.023528477177023888 /* input1 scale */,
    0 /* input2 zero point */, 0.0006536078290082514 /* input2 scale */,
    0 /* output zero point */, 0.003921507392078638 /* output scale */,
    0 /* output min */, 255 /* output max */,
    0 /* flags */,
    &op37);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #37" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op37, xnn_delete_operator);

  xnn_operator_t op38 = nullptr;
  status = xnn_create_multiply_nd_qu8(
    0 /* input1 zero point */, 0.47602489590644836 /* input1 scale */,
    0 /* input2 zero point */, 0.003921507392078638 /* input2 scale */,
    0 /* output zero point */, 0.04567532241344452 /* output scale */,
    0 /* output min */, 255 /* output max */,
    0 /* flags */,
    &op38);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #38" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op38, xnn_delete_operator);

  xnn_operator_t op39 = nullptr;
  status = xnn_create_convolution2d_nhwc_qu8(
    0 /* top padding */, 0 /* right padding */,
    0 /* bottom padding */, 0 /* left padding */,
    1 /* kernel height */, 1 /* kernel width */,
    1 /* subsampling height */, 1 /* subsampling width */,
    1 /* dilation_height */, 1 /* dilation_width */,
    1 /* groups */,
    120 /* input channels per group */,
    40 /* output_channels_per_group */,
    120 /* input pixel stride */,
    40 /* output pixel stride */,
    (uint8_t) 0 /* input_zero_point */,
    0.04567532241344452 /* input_scale */,
    (uint8_t) 137 /* kernel_zero_point */,
    0.0395188145339489 /* kernel_scale */,
    w183.data(), w184.data(),
    (uint8_t) 113 /* output_zero_point */,
    0.315862774848938 /* output_scale */,
    (uint8_t) 0 /* output min */,  (uint8_t) 255 /* output max */,
    0 /* flags */,
    nullptr /* code_cache */,
    nullptr /* weights_cache */,
    &op39);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #39" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op39, xnn_delete_operator);

  xnn_operator_t op40 = nullptr;
  status = xnn_create_add_nd_qu8(
    113 /* input1 zero point */, 0.315862774848938 /* input1 scale */,
    120 /* input2 zero point */, 0.5553078055381775 /* input2 scale */,
    118 /* output zero point */, 0.642050564289093 /* output scale */,
    0 /* output min */, 255 /* output max */,
    0 /* flags */,
    &op40);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #40" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op40, xnn_delete_operator);

  xnn_operator_t op41 = nullptr;
  status = xnn_create_convolution2d_nhwc_qu8(
    0 /* top padding */, 0 /* right padding */,
    0 /* bottom padding */, 0 /* left padding */,
    1 /* kernel height */, 1 /* kernel width */,
    1 /* subsampling height */, 1 /* subsampling width */,
    1 /* dilation_height */, 1 /* dilation_width */,
    1 /* groups */,
    40 /* input channels per group */,
    240 /* output_channels_per_group */,
    40 /* input pixel stride */,
    240 /* output pixel stride */,
    (uint8_t) 118 /* input_zero_point */,
    0.642050564289093 /* input_scale */,
    (uint8_t) 145 /* kernel_zero_point */,
    0.0012737783836200833 /* kernel_scale */,
    w185.data(), w186.data(),
    (uint8_t) 105 /* output_zero_point */,
    0.13308307528495789 /* output_scale */,
    (uint8_t) 0 /* output min */,  (uint8_t) 255 /* output max */,
    0 /* flags */,
    nullptr /* code_cache */,
    nullptr /* weights_cache */,
    &op41);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #41" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op41, xnn_delete_operator);

  xnn_operator_t op42 = nullptr;
  status = xnn_create_copy_nc_x8(
    240 /* channels */,
    240 /* input stride */,
    240 /* output stride */,
    0 /* flags */,
    &op42);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #42" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op42, xnn_delete_operator);

  xnn_operator_t op43 = nullptr;
  status = xnn_create_convolution2d_nhwc_qu8(
    0 /* top padding */, 1 /* right padding */,
    1 /* bottom padding */, 0 /* left padding */,
    3 /* kernel height */, 3 /* kernel width */,
    2 /* subsampling height */, 2 /* subsampling width */,
    1 /* dilation_height */, 1 /* dilation_width */,
    240 /* groups */,
    1 /* input channels per group */,
    1 /* output_channels_per_group */,
    240 /* input pixel stride */,
    240 /* output pixel stride */,
    (uint8_t) 5 /* input_zero_point */,
    0.07557293772697449 /* input_scale */,
    (uint8_t) 131 /* kernel_zero_point */,
    0.05084514245390892 /* kernel_scale */,
    w187.data(), w188.data(),
    (uint8_t) 144 /* output_zero_point */,
    0.17950370907783508 /* output_scale */,
    (uint8_t) 0 /* output min */,  (uint8_t) 255 /* output max */,
    0 /* flags */,
    nullptr /* code_cache */,
    nullptr /* weights_cache */,
    &op43);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #43" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op43, xnn_delete_operator);

  xnn_operator_t op44 = nullptr;
  status = xnn_create_copy_nc_x8(
    240 /* channels */,
    240 /* input stride */,
    240 /* output stride */,
    0 /* flags */,
    &op44);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #44" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op44, xnn_delete_operator);

  xnn_operator_t op45 = nullptr;
  status = xnn_create_convolution2d_nhwc_qu8(
    0 /* top padding */, 0 /* right padding */,
    0 /* bottom padding */, 0 /* left padding */,
    1 /* kernel height */, 1 /* kernel width */,
    1 /* subsampling height */, 1 /* subsampling width */,
    1 /* dilation_height */, 1 /* dilation_width */,
    1 /* groups */,
    240 /* input channels per group */,
    80 /* output_channels_per_group */,
    240 /* input pixel stride */,
    80 /* output pixel stride */,
    (uint8_t) 5 /* input_zero_point */,
    0.07313619554042816 /* input_scale */,
    (uint8_t) 131 /* kernel_zero_point */,
    0.01282998826354742 /* kernel_scale */,
    w189.data(), w190.data(),
    (uint8_t) 130 /* output_zero_point */,
    0.3045005798339844 /* output_scale */,
    (uint8_t) 0 /* output min */,  (uint8_t) 255 /* output max */,
    0 /* flags */,
    nullptr /* code_cache */,
    nullptr /* weights_cache */,
    &op45);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #45" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op45, xnn_delete_operator);

  xnn_operator_t op46 = nullptr;
  status = xnn_create_convolution2d_nhwc_qu8(
    0 /* top padding */, 0 /* right padding */,
    0 /* bottom padding */, 0 /* left padding */,
    1 /* kernel height */, 1 /* kernel width */,
    1 /* subsampling height */, 1 /* subsampling width */,
    1 /* dilation_height */, 1 /* dilation_width */,
    1 /* groups */,
    80 /* input channels per group */,
    200 /* output_channels_per_group */,
    80 /* input pixel stride */,
    200 /* output pixel stride */,
    (uint8_t) 130 /* input_zero_point */,
    0.3045005798339844 /* input_scale */,
    (uint8_t) 132 /* kernel_zero_point */,
    0.001329420367255807 /* kernel_scale */,
    w191.data(), w192.data(),
    (uint8_t) 93 /* output_zero_point */,
    0.09378162026405334 /* output_scale */,
    (uint8_t) 0 /* output min */,  (uint8_t) 255 /* output max */,
    0 /* flags */,
    nullptr /* code_cache */,
    nullptr /* weights_cache */,
    &op46);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #46" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op46, xnn_delete_operator);

  xnn_operator_t op47 = nullptr;
  status = xnn_create_copy_nc_x8(
    200 /* channels */,
    200 /* input stride */,
    200 /* output stride */,
    0 /* flags */,
    &op47);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #47" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op47, xnn_delete_operator);

  xnn_operator_t op48 = nullptr;
  status = xnn_create_convolution2d_nhwc_qu8(
    1 /* top padding */, 1 /* right padding */,
    1 /* bottom padding */, 1 /* left padding */,
    3 /* kernel height */, 3 /* kernel width */,
    1 /* subsampling height */, 1 /* subsampling width */,
    1 /* dilation_height */, 1 /* dilation_width */,
    200 /* groups */,
    1 /* input channels per group */,
    1 /* output_channels_per_group */,
    200 /* input pixel stride */,
    200 /* output pixel stride */,
    (uint8_t) 7 /* input_zero_point */,
    0.05536928027868271 /* input_scale */,
    (uint8_t) 146 /* kernel_zero_point */,
    0.08685924112796783 /* kernel_scale */,
    w193.data(), w194.data(),
    (uint8_t) 137 /* output_zero_point */,
    0.06324371695518494 /* output_scale */,
    (uint8_t) 0 /* output min */,  (uint8_t) 255 /* output max */,
    0 /* flags */,
    nullptr /* code_cache */,
    nullptr /* weights_cache */,
    &op48);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #48" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op48, xnn_delete_operator);

  xnn_operator_t op49 = nullptr;
  status = xnn_create_copy_nc_x8(
    200 /* channels */,
    200 /* input stride */,
    200 /* output stride */,
    0 /* flags */,
    &op49);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #49" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op49, xnn_delete_operator);

  xnn_operator_t op50 = nullptr;
  status = xnn_create_convolution2d_nhwc_qu8(
    0 /* top padding */, 0 /* right padding */,
    0 /* bottom padding */, 0 /* left padding */,
    1 /* kernel height */, 1 /* kernel width */,
    1 /* subsampling height */, 1 /* subsampling width */,
    1 /* dilation_height */, 1 /* dilation_width */,
    1 /* groups */,
    200 /* input channels per group */,
    80 /* output_channels_per_group */,
    200 /* input pixel stride */,
    80 /* output pixel stride */,
    (uint8_t) 15 /* input_zero_point */,
    0.02439218945801258 /* input_scale */,
    (uint8_t) 110 /* kernel_zero_point */,
    0.05305293947458267 /* kernel_scale */,
    w195.data(), w196.data(),
    (uint8_t) 147 /* output_zero_point */,
    0.3730231821537018 /* output_scale */,
    (uint8_t) 0 /* output min */,  (uint8_t) 255 /* output max */,
    0 /* flags */,
    nullptr /* code_cache */,
    nullptr /* weights_cache */,
    &op50);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #50" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op50, xnn_delete_operator);

  xnn_operator_t op51 = nullptr;
  status = xnn_create_add_nd_qu8(
    147 /* input1 zero point */, 0.3730231821537018 /* input1 scale */,
    130 /* input2 zero point */, 0.3045005798339844 /* input2 scale */,
    143 /* output zero point */, 0.3441302180290222 /* output scale */,
    0 /* output min */, 255 /* output max */,
    0 /* flags */,
    &op51);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #51" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op51, xnn_delete_operator);

  xnn_operator_t op52 = nullptr;
  status = xnn_create_convolution2d_nhwc_qu8(
    0 /* top padding */, 0 /* right padding */,
    0 /* bottom padding */, 0 /* left padding */,
    1 /* kernel height */, 1 /* kernel width */,
    1 /* subsampling height */, 1 /* subsampling width */,
    1 /* dilation_height */, 1 /* dilation_width */,
    1 /* groups */,
    80 /* input channels per group */,
    184 /* output_channels_per_group */,
    80 /* input pixel stride */,
    184 /* output pixel stride */,
    (uint8_t) 143 /* input_zero_point */,
    0.3441302180290222 /* input_scale */,
    (uint8_t) 114 /* kernel_zero_point */,
    0.0012470033252611756 /* kernel_scale */,
    w197.data(), w198.data(),
    (uint8_t) 112 /* output_zero_point */,
    0.10203129798173904 /* output_scale */,
    (uint8_t) 0 /* output min */,  (uint8_t) 255 /* output max */,
    0 /* flags */,
    nullptr /* code_cache */,
    nullptr /* weights_cache */,
    &op52);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #52" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op52, xnn_delete_operator);

  xnn_operator_t op53 = nullptr;
  status = xnn_create_copy_nc_x8(
    184 /* channels */,
    184 /* input stride */,
    184 /* output stride */,
    0 /* flags */,
    &op53);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #53" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op53, xnn_delete_operator);

  xnn_operator_t op54 = nullptr;
  status = xnn_create_convolution2d_nhwc_qu8(
    1 /* top padding */, 1 /* right padding */,
    1 /* bottom padding */, 1 /* left padding */,
    3 /* kernel height */, 3 /* kernel width */,
    1 /* subsampling height */, 1 /* subsampling width */,
    1 /* dilation_height */, 1 /* dilation_width */,
    184 /* groups */,
    1 /* input channels per group */,
    1 /* output_channels_per_group */,
    184 /* input pixel stride */,
    184 /* output pixel stride */,
    (uint8_t) 7 /* input_zero_point */,
    0.05502431467175484 /* input_scale */,
    (uint8_t) 150 /* kernel_zero_point */,
    0.08035282045602798 /* kernel_scale */,
    w199.data(), w200.data(),
    (uint8_t) 143 /* output_zero_point */,
    0.08216419816017151 /* output_scale */,
    (uint8_t) 0 /* output min */,  (uint8_t) 255 /* output max */,
    0 /* flags */,
    nullptr /* code_cache */,
    nullptr /* weights_cache */,
    &op54);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #54" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op54, xnn_delete_operator);

  xnn_operator_t op55 = nullptr;
  status = xnn_create_copy_nc_x8(
    184 /* channels */,
    184 /* input stride */,
    184 /* output stride */,
    0 /* flags */,
    &op55);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #55" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op55, xnn_delete_operator);

  xnn_operator_t op56 = nullptr;
  status = xnn_create_convolution2d_nhwc_qu8(
    0 /* top padding */, 0 /* right padding */,
    0 /* bottom padding */, 0 /* left padding */,
    1 /* kernel height */, 1 /* kernel width */,
    1 /* subsampling height */, 1 /* subsampling width */,
    1 /* dilation_height */, 1 /* dilation_width */,
    1 /* groups */,
    184 /* input channels per group */,
    80 /* output_channels_per_group */,
    184 /* input pixel stride */,
    80 /* output pixel stride */,
    (uint8_t) 11 /* input_zero_point */,
    0.03298536315560341 /* input_scale */,
    (uint8_t) 120 /* kernel_zero_point */,
    0.032908618450164795 /* kernel_scale */,
    w201.data(), w202.data(),
    (uint8_t) 118 /* output_zero_point */,
    0.2424711138010025 /* output_scale */,
    (uint8_t) 0 /* output min */,  (uint8_t) 255 /* output max */,
    0 /* flags */,
    nullptr /* code_cache */,
    nullptr /* weights_cache */,
    &op56);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #56" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op56, xnn_delete_operator);

  xnn_operator_t op57 = nullptr;
  status = xnn_create_add_nd_qu8(
    118 /* input1 zero point */, 0.2424711138010025 /* input1 scale */,
    143 /* input2 zero point */, 0.3441302180290222 /* input2 scale */,
    129 /* output zero point */, 0.3845607340335846 /* output scale */,
    0 /* output min */, 255 /* output max */,
    0 /* flags */,
    &op57);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #57" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op57, xnn_delete_operator);

  xnn_operator_t op58 = nullptr;
  status = xnn_create_convolution2d_nhwc_qu8(
    0 /* top padding */, 0 /* right padding */,
    0 /* bottom padding */, 0 /* left padding */,
    1 /* kernel height */, 1 /* kernel width */,
    1 /* subsampling height */, 1 /* subsampling width */,
    1 /* dilation_height */, 1 /* dilation_width */,
    1 /* groups */,
    80 /* input channels per group */,
    184 /* output_channels_per_group */,
    80 /* input pixel stride */,
    184 /* output pixel stride */,
    (uint8_t) 129 /* input_zero_point */,
    0.3845607340335846 /* input_scale */,
    (uint8_t) 124 /* kernel_zero_point */,
    0.0009509262163192034 /* kernel_scale */,
    w203.data(), w204.data(),
    (uint8_t) 127 /* output_zero_point */,
    0.08432933688163757 /* output_scale */,
    (uint8_t) 0 /* output min */,  (uint8_t) 255 /* output max */,
    0 /* flags */,
    nullptr /* code_cache */,
    nullptr /* weights_cache */,
    &op58);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #58" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op58, xnn_delete_operator);

  xnn_operator_t op59 = nullptr;
  status = xnn_create_copy_nc_x8(
    184 /* channels */,
    184 /* input stride */,
    184 /* output stride */,
    0 /* flags */,
    &op59);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #59" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op59, xnn_delete_operator);

  xnn_operator_t op60 = nullptr;
  status = xnn_create_convolution2d_nhwc_qu8(
    1 /* top padding */, 1 /* right padding */,
    1 /* bottom padding */, 1 /* left padding */,
    3 /* kernel height */, 3 /* kernel width */,
    1 /* subsampling height */, 1 /* subsampling width */,
    1 /* dilation_height */, 1 /* dilation_width */,
    184 /* groups */,
    1 /* input channels per group */,
    1 /* output_channels_per_group */,
    184 /* input pixel stride */,
    184 /* output pixel stride */,
    (uint8_t) 9 /* input_zero_point */,
    0.04154029116034508 /* input_scale */,
    (uint8_t) 103 /* kernel_zero_point */,
    0.16053271293640137 /* kernel_scale */,
    w205.data(), w206.data(),
    (uint8_t) 143 /* output_zero_point */,
    0.12306679785251617 /* output_scale */,
    (uint8_t) 0 /* output min */,  (uint8_t) 255 /* output max */,
    0 /* flags */,
    nullptr /* code_cache */,
    nullptr /* weights_cache */,
    &op60);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #60" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op60, xnn_delete_operator);

  xnn_operator_t op61 = nullptr;
  status = xnn_create_copy_nc_x8(
    184 /* channels */,
    184 /* input stride */,
    184 /* output stride */,
    0 /* flags */,
    &op61);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #61" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op61, xnn_delete_operator);

  xnn_operator_t op62 = nullptr;
  status = xnn_create_convolution2d_nhwc_qu8(
    0 /* top padding */, 0 /* right padding */,
    0 /* bottom padding */, 0 /* left padding */,
    1 /* kernel height */, 1 /* kernel width */,
    1 /* subsampling height */, 1 /* subsampling width */,
    1 /* dilation_height */, 1 /* dilation_width */,
    1 /* groups */,
    184 /* input channels per group */,
    80 /* output_channels_per_group */,
    184 /* input pixel stride */,
    80 /* output pixel stride */,
    (uint8_t) 7 /* input_zero_point */,
    0.050543028861284256 /* input_scale */,
    (uint8_t) 115 /* kernel_zero_point */,
    0.022296851500868797 /* kernel_scale */,
    w207.data(), w208.data(),
    (uint8_t) 128 /* output_zero_point */,
    0.243500754237175 /* output_scale */,
    (uint8_t) 0 /* output min */,  (uint8_t) 255 /* output max */,
    0 /* flags */,
    nullptr /* code_cache */,
    nullptr /* weights_cache */,
    &op62);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #62" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op62, xnn_delete_operator);

  xnn_operator_t op63 = nullptr;
  status = xnn_create_add_nd_qu8(
    128 /* input1 zero point */, 0.243500754237175 /* input1 scale */,
    129 /* input2 zero point */, 0.3845607340335846 /* input2 scale */,
    121 /* output zero point */, 0.3455895185470581 /* output scale */,
    0 /* output min */, 255 /* output max */,
    0 /* flags */,
    &op63);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #63" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op63, xnn_delete_operator);

  xnn_operator_t op64 = nullptr;
  status = xnn_create_convolution2d_nhwc_qu8(
    0 /* top padding */, 0 /* right padding */,
    0 /* bottom padding */, 0 /* left padding */,
    1 /* kernel height */, 1 /* kernel width */,
    1 /* subsampling height */, 1 /* subsampling width */,
    1 /* dilation_height */, 1 /* dilation_width */,
    1 /* groups */,
    80 /* input channels per group */,
    480 /* output_channels_per_group */,
    80 /* input pixel stride */,
    480 /* output pixel stride */,
    (uint8_t) 121 /* input_zero_point */,
    0.3455895185470581 /* input_scale */,
    (uint8_t) 83 /* kernel_zero_point */,
    0.002185759600251913 /* kernel_scale */,
    w209.data(), w210.data(),
    (uint8_t) 124 /* output_zero_point */,
    0.14602775871753693 /* output_scale */,
    (uint8_t) 0 /* output min */,  (uint8_t) 255 /* output max */,
    0 /* flags */,
    nullptr /* code_cache */,
    nullptr /* weights_cache */,
    &op64);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #64" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op64, xnn_delete_operator);

  xnn_operator_t op65 = nullptr;
  status = xnn_create_copy_nc_x8(
    480 /* channels */,
    480 /* input stride */,
    480 /* output stride */,
    0 /* flags */,
    &op65);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #65" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op65, xnn_delete_operator);

  xnn_operator_t op66 = nullptr;
  status = xnn_create_convolution2d_nhwc_qu8(
    1 /* top padding */, 1 /* right padding */,
    1 /* bottom padding */, 1 /* left padding */,
    3 /* kernel height */, 3 /* kernel width */,
    1 /* subsampling height */, 1 /* subsampling width */,
    1 /* dilation_height */, 1 /* dilation_width */,
    480 /* groups */,
    1 /* input channels per group */,
    1 /* output_channels_per_group */,
    480 /* input pixel stride */,
    480 /* output pixel stride */,
    (uint8_t) 5 /* input_zero_point */,
    0.07129283249378204 /* input_scale */,
    (uint8_t) 118 /* kernel_zero_point */,
    0.17997917532920837 /* kernel_scale */,
    w211.data(), w212.data(),
    (uint8_t) 107 /* output_zero_point */,
    0.21639184653759003 /* output_scale */,
    (uint8_t) 0 /* output min */,  (uint8_t) 255 /* output max */,
    0 /* flags */,
    nullptr /* code_cache */,
    nullptr /* weights_cache */,
    &op66);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #66" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op66, xnn_delete_operator);

  xnn_operator_t op67 = nullptr;
  status = xnn_create_copy_nc_x8(
    480 /* channels */,
    480 /* input stride */,
    480 /* output stride */,
    0 /* flags */,
    &op67);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #67" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op67, xnn_delete_operator);

  xnn_operator_t op68 = nullptr;
  status = xnn_create_global_average_pooling_nwc_qu8(
    480 /* channels */, 480 /* input stride */, 480 /* output stride */,
    3 /* input zero point */, 0.11743443459272385 /* input scale */,
    3 /* output zero point */, 0.11743443459272385 /* output scale */,
    0 /* output min */, 255 /* output max */,
    0 /* flags */,
    &op68);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #68" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op68, xnn_delete_operator);

  xnn_operator_t op69 = nullptr;
  status = xnn_create_convolution2d_nhwc_qu8(
    0 /* top padding */, 0 /* right padding */,
    0 /* bottom padding */, 0 /* left padding */,
    1 /* kernel height */, 1 /* kernel width */,
    1 /* subsampling height */, 1 /* subsampling width */,
    1 /* dilation_height */, 1 /* dilation_width */,
    1 /* groups */,
    480 /* input channels per group */,
    120 /* output_channels_per_group */,
    480 /* input pixel stride */,
    120 /* output pixel stride */,
    (uint8_t) 3 /* input_zero_point */,
    0.11743443459272385 /* input_scale */,
    (uint8_t) 151 /* kernel_zero_point */,
    0.00905598234385252 /* kernel_scale */,
    w213.data(), w214.data(),
    (uint8_t) 0 /* output_zero_point */,
    0.016878068447113037 /* output_scale */,
    (uint8_t) 0 /* output min */,  (uint8_t) 255 /* output max */,
    0 /* flags */,
    nullptr /* code_cache */,
    nullptr /* weights_cache */,
    &op69);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #69" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op69, xnn_delete_operator);

  xnn_operator_t op70 = nullptr;
  status = xnn_create_convolution2d_nhwc_qu8(
    0 /* top padding */, 0 /* right padding */,
    0 /* bottom padding */, 0 /* left padding */,
    1 /* kernel height */, 1 /* kernel width */,
    1 /* subsampling height */, 1 /* subsampling width */,
    1 /* dilation_height */, 1 /* dilation_width */,
    1 /* groups */,
    120 /* input channels per group */,
    480 /* output_channels_per_group */,
    120 /* input pixel stride */,
    480 /* output pixel stride */,
    (uint8_t) 0 /* input_zero_point */,
    0.016878068447113037 /* input_scale */,
    (uint8_t) 118 /* kernel_zero_point */,
    0.00806900393217802 /* kernel_scale */,
    w215.data(), w216.data(),
    (uint8_t) 154 /* output_zero_point */,
    0.04319746419787407 /* output_scale */,
    (uint8_t) 0 /* output min */,  (uint8_t) 255 /* output max */,
    0 /* flags */,
    nullptr /* code_cache */,
    nullptr /* weights_cache */,
    &op70);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #70" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op70, xnn_delete_operator);

  xnn_operator_t op71 = nullptr;
  status = xnn_create_add_nd_qu8(
    154 /* input1 zero point */, 0.04319746419787407 /* input1 scale */,
    0 /* input2 zero point */, 0.0117647061124444 /* input2 scale */,
    0 /* output zero point */, 0.023528477177023888 /* output scale */,
    0 /* output min */, 255 /* output max */,
    0 /* flags */,
    &op71);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #71" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op71, xnn_delete_operator);

  xnn_operator_t op72 = nullptr;
  status = xnn_create_multiply_nd_qu8(
    0 /* input1 zero point */, 0.023528477177023888 /* input1 scale */,
    0 /* input2 zero point */, 0.0006536078290082514 /* input2 scale */,
    0 /* output zero point */, 0.003921507392078638 /* output scale */,
    0 /* output min */, 255 /* output max */,
    0 /* flags */,
    &op72);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #72" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op72, xnn_delete_operator);

  xnn_operator_t op73 = nullptr;
  status = xnn_create_multiply_nd_qu8(
    3 /* input1 zero point */, 0.11743443459272385 /* input1 scale */,
    0 /* input2 zero point */, 0.003921507392078638 /* input2 scale */,
    11 /* output zero point */, 0.032692719250917435 /* output scale */,
    0 /* output min */, 255 /* output max */,
    0 /* flags */,
    &op73);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #73" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op73, xnn_delete_operator);

  xnn_operator_t op74 = nullptr;
  status = xnn_create_convolution2d_nhwc_qu8(
    0 /* top padding */, 0 /* right padding */,
    0 /* bottom padding */, 0 /* left padding */,
    1 /* kernel height */, 1 /* kernel width */,
    1 /* subsampling height */, 1 /* subsampling width */,
    1 /* dilation_height */, 1 /* dilation_width */,
    1 /* groups */,
    480 /* input channels per group */,
    112 /* output_channels_per_group */,
    480 /* input pixel stride */,
    112 /* output pixel stride */,
    (uint8_t) 11 /* input_zero_point */,
    0.032692719250917435 /* input_scale */,
    (uint8_t) 120 /* kernel_zero_point */,
    0.02655486948788166 /* kernel_scale */,
    w219.data(), w220.data(),
    (uint8_t) 126 /* output_zero_point */,
    0.28324681520462036 /* output_scale */,
    (uint8_t) 0 /* output min */,  (uint8_t) 255 /* output max */,
    0 /* flags */,
    nullptr /* code_cache */,
    nullptr /* weights_cache */,
    &op74);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #74" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op74, xnn_delete_operator);

  xnn_operator_t op75 = nullptr;
  status = xnn_create_convolution2d_nhwc_qu8(
    0 /* top padding */, 0 /* right padding */,
    0 /* bottom padding */, 0 /* left padding */,
    1 /* kernel height */, 1 /* kernel width */,
    1 /* subsampling height */, 1 /* subsampling width */,
    1 /* dilation_height */, 1 /* dilation_width */,
    1 /* groups */,
    112 /* input channels per group */,
    672 /* output_channels_per_group */,
    112 /* input pixel stride */,
    672 /* output pixel stride */,
    (uint8_t) 126 /* input_zero_point */,
    0.28324681520462036 /* input_scale */,
    (uint8_t) 122 /* kernel_zero_point */,
    0.0020197967533022165 /* kernel_scale */,
    w221.data(), w222.data(),
    (uint8_t) 104 /* output_zero_point */,
    0.1581750512123108 /* output_scale */,
    (uint8_t) 0 /* output min */,  (uint8_t) 255 /* output max */,
    0 /* flags */,
    nullptr /* code_cache */,
    nullptr /* weights_cache */,
    &op75);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #75" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op75, xnn_delete_operator);

  xnn_operator_t op76 = nullptr;
  status = xnn_create_copy_nc_x8(
    672 /* channels */,
    672 /* input stride */,
    672 /* output stride */,
    0 /* flags */,
    &op76);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #76" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op76, xnn_delete_operator);

  xnn_operator_t op77 = nullptr;
  status = xnn_create_convolution2d_nhwc_qu8(
    1 /* top padding */, 1 /* right padding */,
    1 /* bottom padding */, 1 /* left padding */,
    3 /* kernel height */, 3 /* kernel width */,
    1 /* subsampling height */, 1 /* subsampling width */,
    1 /* dilation_height */, 1 /* dilation_width */,
    672 /* groups */,
    1 /* input channels per group */,
    1 /* output_channels_per_group */,
    672 /* input pixel stride */,
    672 /* output pixel stride */,
    (uint8_t) 4 /* input_zero_point */,
    0.086741141974926 /* input_scale */,
    (uint8_t) 131 /* kernel_zero_point */,
    0.10931526124477386 /* kernel_scale */,
    w223.data(), w224.data(),
    (uint8_t) 134 /* output_zero_point */,
    0.32434141635894775 /* output_scale */,
    (uint8_t) 0 /* output min */,  (uint8_t) 255 /* output max */,
    0 /* flags */,
    nullptr /* code_cache */,
    nullptr /* weights_cache */,
    &op77);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #77" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op77, xnn_delete_operator);

  xnn_operator_t op78 = nullptr;
  status = xnn_create_copy_nc_x8(
    672 /* channels */,
    672 /* input stride */,
    672 /* output stride */,
    0 /* flags */,
    &op78);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #78" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op78, xnn_delete_operator);

  xnn_operator_t op79 = nullptr;
  status = xnn_create_global_average_pooling_nwc_qu8(
    672 /* channels */, 672 /* input stride */, 672 /* output stride */,
    3 /* input zero point */, 0.13992221653461456 /* input scale */,
    3 /* output zero point */, 0.13992221653461456 /* output scale */,
    0 /* output min */, 255 /* output max */,
    0 /* flags */,
    &op79);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #79" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op79, xnn_delete_operator);

  xnn_operator_t op80 = nullptr;
  status = xnn_create_convolution2d_nhwc_qu8(
    0 /* top padding */, 0 /* right padding */,
    0 /* bottom padding */, 0 /* left padding */,
    1 /* kernel height */, 1 /* kernel width */,
    1 /* subsampling height */, 1 /* subsampling width */,
    1 /* dilation_height */, 1 /* dilation_width */,
    1 /* groups */,
    672 /* input channels per group */,
    168 /* output_channels_per_group */,
    672 /* input pixel stride */,
    168 /* output pixel stride */,
    (uint8_t) 3 /* input_zero_point */,
    0.13992221653461456 /* input_scale */,
    (uint8_t) 122 /* kernel_zero_point */,
    0.007790832780301571 /* kernel_scale */,
    w225.data(), w226.data(),
    (uint8_t) 0 /* output_zero_point */,
    0.011208290234208107 /* output_scale */,
    (uint8_t) 0 /* output min */,  (uint8_t) 255 /* output max */,
    0 /* flags */,
    nullptr /* code_cache */,
    nullptr /* weights_cache */,
    &op80);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #80" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op80, xnn_delete_operator);

  xnn_operator_t op81 = nullptr;
  status = xnn_create_convolution2d_nhwc_qu8(
    0 /* top padding */, 0 /* right padding */,
    0 /* bottom padding */, 0 /* left padding */,
    1 /* kernel height */, 1 /* kernel width */,
    1 /* subsampling height */, 1 /* subsampling width */,
    1 /* dilation_height */, 1 /* dilation_width */,
    1 /* groups */,
    168 /* input channels per group */,
    672 /* output_channels_per_group */,
    168 /* input pixel stride */,
    672 /* output pixel stride */,
    (uint8_t) 0 /* input_zero_point */,
    0.011208290234208107 /* input_scale */,
    (uint8_t) 102 /* kernel_zero_point */,
    0.005877777934074402 /* kernel_scale */,
    w227.data(), w228.data(),
    (uint8_t) 160 /* output_zero_point */,
    0.029027709737420082 /* output_scale */,
    (uint8_t) 0 /* output min */,  (uint8_t) 255 /* output max */,
    0 /* flags */,
    nullptr /* code_cache */,
    nullptr /* weights_cache */,
    &op81);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #81" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op81, xnn_delete_operator);

  xnn_operator_t op82 = nullptr;
  status = xnn_create_add_nd_qu8(
    160 /* input1 zero point */, 0.029027709737420082 /* input1 scale */,
    0 /* input2 zero point */, 0.0117647061124444 /* input2 scale */,
    0 /* output zero point */, 0.022148869931697845 /* output scale */,
    0 /* output min */, 255 /* output max */,
    0 /* flags */,
    &op82);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #82" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op82, xnn_delete_operator);

  xnn_operator_t op83 = nullptr;
  status = xnn_create_multiply_nd_qu8(
    0 /* input1 zero point */, 0.022148869931697845 /* input1 scale */,
    0 /* input2 zero point */, 0.0006536078290082514 /* input2 scale */,
    0 /* output zero point */, 0.0036574413534253836 /* output scale */,
    0 /* output min */, 255 /* output max */,
    0 /* flags */,
    &op83);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #83" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op83, xnn_delete_operator);

  xnn_operator_t op84 = nullptr;
  status = xnn_create_multiply_nd_qu8(
    3 /* input1 zero point */, 0.13992221653461456 /* input1 scale */,
    0 /* input2 zero point */, 0.0036574413534253836 /* input2 scale */,
    14 /* output zero point */, 0.02700776234269142 /* output scale */,
    0 /* output min */, 255 /* output max */,
    0 /* flags */,
    &op84);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #84" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op84, xnn_delete_operator);

  xnn_operator_t op85 = nullptr;
  status = xnn_create_convolution2d_nhwc_qu8(
    0 /* top padding */, 0 /* right padding */,
    0 /* bottom padding */, 0 /* left padding */,
    1 /* kernel height */, 1 /* kernel width */,
    1 /* subsampling height */, 1 /* subsampling width */,
    1 /* dilation_height */, 1 /* dilation_width */,
    1 /* groups */,
    672 /* input channels per group */,
    112 /* output_channels_per_group */,
    672 /* input pixel stride */,
    112 /* output pixel stride */,
    (uint8_t) 14 /* input_zero_point */,
    0.02700776234269142 /* input_scale */,
    (uint8_t) 127 /* kernel_zero_point */,
    0.07714813202619553 /* kernel_scale */,
    w231.data(), w232.data(),
    (uint8_t) 139 /* output_zero_point */,
    0.2981528043746948 /* output_scale */,
    (uint8_t) 0 /* output min */,  (uint8_t) 255 /* output max */,
    0 /* flags */,
    nullptr /* code_cache */,
    nullptr /* weights_cache */,
    &op85);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #85" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op85, xnn_delete_operator);

  xnn_operator_t op86 = nullptr;
  status = xnn_create_add_nd_qu8(
    139 /* input1 zero point */, 0.2981528043746948 /* input1 scale */,
    126 /* input2 zero point */, 0.28324681520462036 /* input2 scale */,
    133 /* output zero point */, 0.32168200612068176 /* output scale */,
    0 /* output min */, 255 /* output max */,
    0 /* flags */,
    &op86);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #86" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op86, xnn_delete_operator);

  xnn_operator_t op87 = nullptr;
  status = xnn_create_convolution2d_nhwc_qu8(
    0 /* top padding */, 0 /* right padding */,
    0 /* bottom padding */, 0 /* left padding */,
    1 /* kernel height */, 1 /* kernel width */,
    1 /* subsampling height */, 1 /* subsampling width */,
    1 /* dilation_height */, 1 /* dilation_width */,
    1 /* groups */,
    112 /* input channels per group */,
    672 /* output_channels_per_group */,
    112 /* input pixel stride */,
    672 /* output pixel stride */,
    (uint8_t) 133 /* input_zero_point */,
    0.32168200612068176 /* input_scale */,
    (uint8_t) 119 /* kernel_zero_point */,
    0.0033816234208643436 /* kernel_scale */,
    w233.data(), w234.data(),
    (uint8_t) 124 /* output_zero_point */,
    0.1896306872367859 /* output_scale */,
    (uint8_t) 0 /* output min */,  (uint8_t) 255 /* output max */,
    0 /* flags */,
    nullptr /* code_cache */,
    nullptr /* weights_cache */,
    &op87);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #87" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op87, xnn_delete_operator);

  xnn_operator_t op88 = nullptr;
  status = xnn_create_copy_nc_x8(
    672 /* channels */,
    672 /* input stride */,
    672 /* output stride */,
    0 /* flags */,
    &op88);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #88" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op88, xnn_delete_operator);

  xnn_operator_t op89 = nullptr;
  status = xnn_create_convolution2d_nhwc_qu8(
    1 /* top padding */, 2 /* right padding */,
    2 /* bottom padding */, 1 /* left padding */,
    5 /* kernel height */, 5 /* kernel width */,
    2 /* subsampling height */, 2 /* subsampling width */,
    1 /* dilation_height */, 1 /* dilation_width */,
    672 /* groups */,
    1 /* input channels per group */,
    1 /* output_channels_per_group */,
    672 /* input pixel stride */,
    672 /* output pixel stride */,
    (uint8_t) 4 /* input_zero_point */,
    0.0902840867638588 /* input_scale */,
    (uint8_t) 132 /* kernel_zero_point */,
    0.036103639751672745 /* kernel_scale */,
    w235.data(), w236.data(),
    (uint8_t) 99 /* output_zero_point */,
    0.22421795129776 /* output_scale */,
    (uint8_t) 0 /* output min */,  (uint8_t) 255 /* output max */,
    0 /* flags */,
    nullptr /* code_cache */,
    nullptr /* weights_cache */,
    &op89);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #89" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op89, xnn_delete_operator);

  xnn_operator_t op90 = nullptr;
  status = xnn_create_copy_nc_x8(
    672 /* channels */,
    672 /* input stride */,
    672 /* output stride */,
    0 /* flags */,
    &op90);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #90" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op90, xnn_delete_operator);

  xnn_operator_t op91 = nullptr;
  status = xnn_create_global_average_pooling_nwc_qu8(
    672 /* channels */, 672 /* input stride */, 672 /* output stride */,
    3 /* input zero point */, 0.12238067388534546 /* input scale */,
    3 /* output zero point */, 0.12238067388534546 /* output scale */,
    0 /* output min */, 255 /* output max */,
    0 /* flags */,
    &op91);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #91" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op91, xnn_delete_operator);

  xnn_operator_t op92 = nullptr;
  status = xnn_create_convolution2d_nhwc_qu8(
    0 /* top padding */, 0 /* right padding */,
    0 /* bottom padding */, 0 /* left padding */,
    1 /* kernel height */, 1 /* kernel width */,
    1 /* subsampling height */, 1 /* subsampling width */,
    1 /* dilation_height */, 1 /* dilation_width */,
    1 /* groups */,
    672 /* input channels per group */,
    168 /* output_channels_per_group */,
    672 /* input pixel stride */,
    168 /* output pixel stride */,
    (uint8_t) 3 /* input_zero_point */,
    0.12238067388534546 /* input_scale */,
    (uint8_t) 124 /* kernel_zero_point */,
    0.00663334084674716 /* kernel_scale */,
    w237.data(), w238.data(),
    (uint8_t) 0 /* output_zero_point */,
    0.023197801783680916 /* output_scale */,
    (uint8_t) 0 /* output min */,  (uint8_t) 255 /* output max */,
    0 /* flags */,
    nullptr /* code_cache */,
    nullptr /* weights_cache */,
    &op92);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #92" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op92, xnn_delete_operator);

  xnn_operator_t op93 = nullptr;
  status = xnn_create_convolution2d_nhwc_qu8(
    0 /* top padding */, 0 /* right padding */,
    0 /* bottom padding */, 0 /* left padding */,
    1 /* kernel height */, 1 /* kernel width */,
    1 /* subsampling height */, 1 /* subsampling width */,
    1 /* dilation_height */, 1 /* dilation_width */,
    1 /* groups */,
    168 /* input channels per group */,
    672 /* output_channels_per_group */,
    168 /* input pixel stride */,
    672 /* output pixel stride */,
    (uint8_t) 0 /* input_zero_point */,
    0.023197801783680916 /* input_scale */,
    (uint8_t) 88 /* kernel_zero_point */,
    0.009690321050584316 /* kernel_scale */,
    w239.data(), w240.data(),
    (uint8_t) 120 /* output_zero_point */,
    0.04488217830657959 /* output_scale */,
    (uint8_t) 0 /* output min */,  (uint8_t) 255 /* output max */,
    0 /* flags */,
    nullptr /* code_cache */,
    nullptr /* weights_cache */,
    &op93);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #93" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op93, xnn_delete_operator);

  xnn_operator_t op94 = nullptr;
  status = xnn_create_add_nd_qu8(
    120 /* input1 zero point */, 0.04488217830657959 /* input1 scale */,
    0 /* input2 zero point */, 0.0117647061124444 /* input2 scale */,
    0 /* output zero point */, 0.023528477177023888 /* output scale */,
    0 /* output min */, 255 /* output max */,
    0 /* flags */,
    &op94);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #94" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op94, xnn_delete_operator);

  xnn_operator_t op95 = nullptr;
  status = xnn_create_multiply_nd_qu8(
    0 /* input1 zero point */, 0.023528477177023888 /* input1 scale */,
    0 /* input2 zero point */, 0.0006536078290082514 /* input2 scale */,
    0 /* output zero point */, 0.003921507392078638 /* output scale */,
    0 /* output min */, 255 /* output max */,
    0 /* flags */,
    &op95);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #95" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op95, xnn_delete_operator);

  xnn_operator_t op96 = nullptr;
  status = xnn_create_multiply_nd_qu8(
    3 /* input1 zero point */, 0.12238067388534546 /* input1 scale */,
    0 /* input2 zero point */, 0.003921507392078638 /* input2 scale */,
    8 /* output zero point */, 0.048699233680963516 /* output scale */,
    0 /* output min */, 255 /* output max */,
    0 /* flags */,
    &op96);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #96" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op96, xnn_delete_operator);

  xnn_operator_t op97 = nullptr;
  status = xnn_create_convolution2d_nhwc_qu8(
    0 /* top padding */, 0 /* right padding */,
    0 /* bottom padding */, 0 /* left padding */,
    1 /* kernel height */, 1 /* kernel width */,
    1 /* subsampling height */, 1 /* subsampling width */,
    1 /* dilation_height */, 1 /* dilation_width */,
    1 /* groups */,
    672 /* input channels per group */,
    160 /* output_channels_per_group */,
    672 /* input pixel stride */,
    160 /* output pixel stride */,
    (uint8_t) 8 /* input_zero_point */,
    0.048699233680963516 /* input_scale */,
    (uint8_t) 131 /* kernel_zero_point */,
    0.016730330884456635 /* kernel_scale */,
    w243.data(), w244.data(),
    (uint8_t) 125 /* output_zero_point */,
    0.28946512937545776 /* output_scale */,
    (uint8_t) 0 /* output min */,  (uint8_t) 255 /* output max */,
    0 /* flags */,
    nullptr /* code_cache */,
    nullptr /* weights_cache */,
    &op97);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #97" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op97, xnn_delete_operator);

  xnn_operator_t op98 = nullptr;
  status = xnn_create_convolution2d_nhwc_qu8(
    0 /* top padding */, 0 /* right padding */,
    0 /* bottom padding */, 0 /* left padding */,
    1 /* kernel height */, 1 /* kernel width */,
    1 /* subsampling height */, 1 /* subsampling width */,
    1 /* dilation_height */, 1 /* dilation_width */,
    1 /* groups */,
    160 /* input channels per group */,
    960 /* output_channels_per_group */,
    160 /* input pixel stride */,
    960 /* output pixel stride */,
    (uint8_t) 125 /* input_zero_point */,
    0.28946512937545776 /* input_scale */,
    (uint8_t) 110 /* kernel_zero_point */,
    0.001960444264113903 /* kernel_scale */,
    w245.data(), w246.data(),
    (uint8_t) 107 /* output_zero_point */,
    0.14798924326896667 /* output_scale */,
    (uint8_t) 0 /* output min */,  (uint8_t) 255 /* output max */,
    0 /* flags */,
    nullptr /* code_cache */,
    nullptr /* weights_cache */,
    &op98);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #98" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op98, xnn_delete_operator);

  xnn_operator_t op99 = nullptr;
  status = xnn_create_copy_nc_x8(
    960 /* channels */,
    960 /* input stride */,
    960 /* output stride */,
    0 /* flags */,
    &op99);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #99" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op99, xnn_delete_operator);

  xnn_operator_t op100 = nullptr;
  status = xnn_create_convolution2d_nhwc_qu8(
    2 /* top padding */, 2 /* right padding */,
    2 /* bottom padding */, 2 /* left padding */,
    5 /* kernel height */, 5 /* kernel width */,
    1 /* subsampling height */, 1 /* subsampling width */,
    1 /* dilation_height */, 1 /* dilation_width */,
    960 /* groups */,
    1 /* input channels per group */,
    1 /* output_channels_per_group */,
    960 /* input pixel stride */,
    960 /* output pixel stride */,
    (uint8_t) 5 /* input_zero_point */,
    0.08019781112670898 /* input_scale */,
    (uint8_t) 126 /* kernel_zero_point */,
    0.16313187777996063 /* kernel_scale */,
    w247.data(), w248.data(),
    (uint8_t) 113 /* output_zero_point */,
    0.35713136196136475 /* output_scale */,
    (uint8_t) 0 /* output min */,  (uint8_t) 255 /* output max */,
    0 /* flags */,
    nullptr /* code_cache */,
    nullptr /* weights_cache */,
    &op100);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #100" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op100, xnn_delete_operator);

  xnn_operator_t op101 = nullptr;
  status = xnn_create_copy_nc_x8(
    960 /* channels */,
    960 /* input stride */,
    960 /* output stride */,
    0 /* flags */,
    &op101);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #101" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op101, xnn_delete_operator);

  xnn_operator_t op102 = nullptr;
  status = xnn_create_global_average_pooling_nwc_qu8(
    960 /* channels */, 960 /* input stride */, 960 /* output stride */,
    2 /* input zero point */, 0.16568607091903687 /* input scale */,
    2 /* output zero point */, 0.16568607091903687 /* output scale */,
    0 /* output min */, 255 /* output max */,
    0 /* flags */,
    &op102);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #102" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op102, xnn_delete_operator);

  xnn_operator_t op103 = nullptr;
  status = xnn_create_convolution2d_nhwc_qu8(
    0 /* top padding */, 0 /* right padding */,
    0 /* bottom padding */, 0 /* left padding */,
    1 /* kernel height */, 1 /* kernel width */,
    1 /* subsampling height */, 1 /* subsampling width */,
    1 /* dilation_height */, 1 /* dilation_width */,
    1 /* groups */,
    960 /* input channels per group */,
    240 /* output_channels_per_group */,
    960 /* input pixel stride */,
    240 /* output pixel stride */,
    (uint8_t) 2 /* input_zero_point */,
    0.16568607091903687 /* input_scale */,
    (uint8_t) 119 /* kernel_zero_point */,
    0.00574096105992794 /* kernel_scale */,
    w249.data(), w250.data(),
    (uint8_t) 0 /* output_zero_point */,
    0.02531706728041172 /* output_scale */,
    (uint8_t) 0 /* output min */,  (uint8_t) 255 /* output max */,
    0 /* flags */,
    nullptr /* code_cache */,
    nullptr /* weights_cache */,
    &op103);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #103" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op103, xnn_delete_operator);

  xnn_operator_t op104 = nullptr;
  status = xnn_create_convolution2d_nhwc_qu8(
    0 /* top padding */, 0 /* right padding */,
    0 /* bottom padding */, 0 /* left padding */,
    1 /* kernel height */, 1 /* kernel width */,
    1 /* subsampling height */, 1 /* subsampling width */,
    1 /* dilation_height */, 1 /* dilation_width */,
    1 /* groups */,
    240 /* input channels per group */,
    960 /* output_channels_per_group */,
    240 /* input pixel stride */,
    960 /* output pixel stride */,
    (uint8_t) 0 /* input_zero_point */,
    0.02531706728041172 /* input_scale */,
    (uint8_t) 76 /* kernel_zero_point */,
    0.00785693246871233 /* kernel_scale */,
    w251.data(), w252.data(),
    (uint8_t) 132 /* output_zero_point */,
    0.05263541638851166 /* output_scale */,
    (uint8_t) 0 /* output min */,  (uint8_t) 255 /* output max */,
    0 /* flags */,
    nullptr /* code_cache */,
    nullptr /* weights_cache */,
    &op104);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #104" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op104, xnn_delete_operator);

  xnn_operator_t op105 = nullptr;
  status = xnn_create_add_nd_qu8(
    132 /* input1 zero point */, 0.05263541638851166 /* input1 scale */,
    0 /* input2 zero point */, 0.0117647061124444 /* input2 scale */,
    0 /* output zero point */, 0.023528477177023888 /* output scale */,
    0 /* output min */, 255 /* output max */,
    0 /* flags */,
    &op105);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #105" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op105, xnn_delete_operator);

  xnn_operator_t op106 = nullptr;
  status = xnn_create_multiply_nd_qu8(
    0 /* input1 zero point */, 0.023528477177023888 /* input1 scale */,
    0 /* input2 zero point */, 0.0006536078290082514 /* input2 scale */,
    0 /* output zero point */, 0.003921374212950468 /* output scale */,
    0 /* output min */, 255 /* output max */,
    0 /* flags */,
    &op106);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #106" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op106, xnn_delete_operator);

  xnn_operator_t op107 = nullptr;
  status = xnn_create_multiply_nd_qu8(
    2 /* input1 zero point */, 0.16568607091903687 /* input1 scale */,
    0 /* input2 zero point */, 0.003921374212950468 /* input2 scale */,
    6 /* output zero point */, 0.05613052472472191 /* output scale */,
    0 /* output min */, 255 /* output max */,
    0 /* flags */,
    &op107);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #107" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op107, xnn_delete_operator);

  xnn_operator_t op108 = nullptr;
  status = xnn_create_convolution2d_nhwc_qu8(
    0 /* top padding */, 0 /* right padding */,
    0 /* bottom padding */, 0 /* left padding */,
    1 /* kernel height */, 1 /* kernel width */,
    1 /* subsampling height */, 1 /* subsampling width */,
    1 /* dilation_height */, 1 /* dilation_width */,
    1 /* groups */,
    960 /* input channels per group */,
    160 /* output_channels_per_group */,
    960 /* input pixel stride */,
    160 /* output pixel stride */,
    (uint8_t) 6 /* input_zero_point */,
    0.05613052472472191 /* input_scale */,
    (uint8_t) 131 /* kernel_zero_point */,
    0.030698217451572418 /* kernel_scale */,
    w255.data(), w256.data(),
    (uint8_t) 124 /* output_zero_point */,
    0.25378188490867615 /* output_scale */,
    (uint8_t) 0 /* output min */,  (uint8_t) 255 /* output max */,
    0 /* flags */,
    nullptr /* code_cache */,
    nullptr /* weights_cache */,
    &op108);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #108" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op108, xnn_delete_operator);

  xnn_operator_t op109 = nullptr;
  status = xnn_create_add_nd_qu8(
    124 /* input1 zero point */, 0.25378188490867615 /* input1 scale */,
    125 /* input2 zero point */, 0.28946512937545776 /* input2 scale */,
    125 /* output zero point */, 0.3463849723339081 /* output scale */,
    0 /* output min */, 255 /* output max */,
    0 /* flags */,
    &op109);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #109" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op109, xnn_delete_operator);

  xnn_operator_t op110 = nullptr;
  status = xnn_create_convolution2d_nhwc_qu8(
    0 /* top padding */, 0 /* right padding */,
    0 /* bottom padding */, 0 /* left padding */,
    1 /* kernel height */, 1 /* kernel width */,
    1 /* subsampling height */, 1 /* subsampling width */,
    1 /* dilation_height */, 1 /* dilation_width */,
    1 /* groups */,
    160 /* input channels per group */,
    960 /* output_channels_per_group */,
    160 /* input pixel stride */,
    960 /* output pixel stride */,
    (uint8_t) 125 /* input_zero_point */,
    0.3463849723339081 /* input_scale */,
    (uint8_t) 110 /* kernel_zero_point */,
    0.0016829369124025106 /* kernel_scale */,
    w257.data(), w258.data(),
    (uint8_t) 142 /* output_zero_point */,
    0.176979660987854 /* output_scale */,
    (uint8_t) 0 /* output min */,  (uint8_t) 255 /* output max */,
    0 /* flags */,
    nullptr /* code_cache */,
    nullptr /* weights_cache */,
    &op110);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #110" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op110, xnn_delete_operator);

  xnn_operator_t op111 = nullptr;
  status = xnn_create_copy_nc_x8(
    960 /* channels */,
    960 /* input stride */,
    960 /* output stride */,
    0 /* flags */,
    &op111);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #111" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op111, xnn_delete_operator);

  xnn_operator_t op112 = nullptr;
  status = xnn_create_convolution2d_nhwc_qu8(
    2 /* top padding */, 2 /* right padding */,
    2 /* bottom padding */, 2 /* left padding */,
    5 /* kernel height */, 5 /* kernel width */,
    1 /* subsampling height */, 1 /* subsampling width */,
    1 /* dilation_height */, 1 /* dilation_width */,
    960 /* groups */,
    1 /* input channels per group */,
    1 /* output_channels_per_group */,
    960 /* input pixel stride */,
    960 /* output pixel stride */,
    (uint8_t) 5 /* input_zero_point */,
    0.07351326942443848 /* input_scale */,
    (uint8_t) 131 /* kernel_zero_point */,
    0.22339750826358795 /* kernel_scale */,
    w259.data(), w260.data(),
    (uint8_t) 80 /* output_zero_point */,
    0.6548007130622864 /* output_scale */,
    (uint8_t) 0 /* output min */,  (uint8_t) 255 /* output max */,
    0 /* flags */,
    nullptr /* code_cache */,
    nullptr /* weights_cache */,
    &op112);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #112" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op112, xnn_delete_operator);

  xnn_operator_t op113 = nullptr;
  status = xnn_create_copy_nc_x8(
    960 /* channels */,
    960 /* input stride */,
    960 /* output stride */,
    0 /* flags */,
    &op113);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #113" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op113, xnn_delete_operator);

  xnn_operator_t op114 = nullptr;
  status = xnn_create_global_average_pooling_nwc_qu8(
    960 /* channels */, 960 /* input stride */, 960 /* output stride */,
    1 /* input zero point */, 0.37250789999961853 /* input scale */,
    1 /* output zero point */, 0.37250789999961853 /* output scale */,
    0 /* output min */, 255 /* output max */,
    0 /* flags */,
    &op114);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #114" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op114, xnn_delete_operator);

  xnn_operator_t op115 = nullptr;
  status = xnn_create_convolution2d_nhwc_qu8(
    0 /* top padding */, 0 /* right padding */,
    0 /* bottom padding */, 0 /* left padding */,
    1 /* kernel height */, 1 /* kernel width */,
    1 /* subsampling height */, 1 /* subsampling width */,
    1 /* dilation_height */, 1 /* dilation_width */,
    1 /* groups */,
    960 /* input channels per group */,
    240 /* output_channels_per_group */,
    960 /* input pixel stride */,
    240 /* output pixel stride */,
    (uint8_t) 1 /* input_zero_point */,
    0.37250789999961853 /* input_scale */,
    (uint8_t) 113 /* kernel_zero_point */,
    0.008814899250864983 /* kernel_scale */,
    w261.data(), w262.data(),
    (uint8_t) 0 /* output_zero_point */,
    0.05916303023695946 /* output_scale */,
    (uint8_t) 0 /* output min */,  (uint8_t) 255 /* output max */,
    0 /* flags */,
    nullptr /* code_cache */,
    nullptr /* weights_cache */,
    &op115);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #115" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op115, xnn_delete_operator);

  xnn_operator_t op116 = nullptr;
  status = xnn_create_convolution2d_nhwc_qu8(
    0 /* top padding */, 0 /* right padding */,
    0 /* bottom padding */, 0 /* left padding */,
    1 /* kernel height */, 1 /* kernel width */,
    1 /* subsampling height */, 1 /* subsampling width */,
    1 /* dilation_height */, 1 /* dilation_width */,
    1 /* groups */,
    240 /* input channels per group */,
    960 /* output_channels_per_group */,
    240 /* input pixel stride */,
    960 /* output pixel stride */,
    (uint8_t) 0 /* input_zero_point */,
    0.05916303023695946 /* input_scale */,
    (uint8_t) 90 /* kernel_zero_point */,
    0.00719048036262393 /* kernel_scale */,
    w263.data(), w264.data(),
    (uint8_t) 126 /* output_zero_point */,
    0.11174535006284714 /* output_scale */,
    (uint8_t) 0 /* output min */,  (uint8_t) 255 /* output max */,
    0 /* flags */,
    nullptr /* code_cache */,
    nullptr /* weights_cache */,
    &op116);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #116" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op116, xnn_delete_operator);

  xnn_operator_t op117 = nullptr;
  status = xnn_create_add_nd_qu8(
    126 /* input1 zero point */, 0.11174535006284714 /* input1 scale */,
    0 /* input2 zero point */, 0.0117647061124444 /* input2 scale */,
    0 /* output zero point */, 0.023528477177023888 /* output scale */,
    0 /* output min */, 255 /* output max */,
    0 /* flags */,
    &op117);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #117" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op117, xnn_delete_operator);

  xnn_operator_t op118 = nullptr;
  status = xnn_create_multiply_nd_qu8(
    0 /* input1 zero point */, 0.023528477177023888 /* input1 scale */,
    0 /* input2 zero point */, 0.0006536078290082514 /* input2 scale */,
    0 /* output zero point */, 0.003921506926417351 /* output scale */,
    0 /* output min */, 255 /* output max */,
    0 /* flags */,
    &op118);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #118" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op118, xnn_delete_operator);

  xnn_operator_t op119 = nullptr;
  status = xnn_create_multiply_nd_qu8(
    1 /* input1 zero point */, 0.37250789999961853 /* input1 scale */,
    0 /* input2 zero point */, 0.003921506926417351 /* input2 scale */,
    2 /* output zero point */, 0.21566562354564667 /* output scale */,
    0 /* output min */, 255 /* output max */,
    0 /* flags */,
    &op119);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #119" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op119, xnn_delete_operator);

  xnn_operator_t op120 = nullptr;
  status = xnn_create_convolution2d_nhwc_qu8(
    0 /* top padding */, 0 /* right padding */,
    0 /* bottom padding */, 0 /* left padding */,
    1 /* kernel height */, 1 /* kernel width */,
    1 /* subsampling height */, 1 /* subsampling width */,
    1 /* dilation_height */, 1 /* dilation_width */,
    1 /* groups */,
    960 /* input channels per group */,
    160 /* output_channels_per_group */,
    960 /* input pixel stride */,
    160 /* output pixel stride */,
    (uint8_t) 2 /* input_zero_point */,
    0.21566562354564667 /* input_scale */,
    (uint8_t) 141 /* kernel_zero_point */,
    0.03563878685235977 /* kernel_scale */,
    w267.data(), w268.data(),
    (uint8_t) 128 /* output_zero_point */,
    0.5318803191184998 /* output_scale */,
    (uint8_t) 0 /* output min */,  (uint8_t) 255 /* output max */,
    0 /* flags */,
    nullptr /* code_cache */,
    nullptr /* weights_cache */,
    &op120);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #120" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op120, xnn_delete_operator);

  xnn_operator_t op121 = nullptr;
  status = xnn_create_add_nd_qu8(
    128 /* input1 zero point */, 0.5318803191184998 /* input1 scale */,
    125 /* input2 zero point */, 0.3463849723339081 /* input2 scale */,
    127 /* output zero point */, 0.6238188147544861 /* output scale */,
    0 /* output min */, 255 /* output max */,
    0 /* flags */,
    &op121);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #121" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op121, xnn_delete_operator);

  xnn_operator_t op122 = nullptr;
  status = xnn_create_convolution2d_nhwc_qu8(
    0 /* top padding */, 0 /* right padding */,
    0 /* bottom padding */, 0 /* left padding */,
    1 /* kernel height */, 1 /* kernel width */,
    1 /* subsampling height */, 1 /* subsampling width */,
    1 /* dilation_height */, 1 /* dilation_width */,
    1 /* groups */,
    160 /* input channels per group */,
    960 /* output_channels_per_group */,
    160 /* input pixel stride */,
    960 /* output pixel stride */,
    (uint8_t) 127 /* input_zero_point */,
    0.6238188147544861 /* input_scale */,
    (uint8_t) 126 /* kernel_zero_point */,
    0.002437639981508255 /* kernel_scale */,
    w269.data(), w270.data(),
    (uint8_t) 129 /* output_zero_point */,
    0.6554628014564514 /* output_scale */,
    (uint8_t) 0 /* output min */,  (uint8_t) 255 /* output max */,
    0 /* flags */,
    nullptr /* code_cache */,
    nullptr /* weights_cache */,
    &op122);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #122" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op122, xnn_delete_operator);

  xnn_operator_t op123 = nullptr;
  status = xnn_create_copy_nc_x8(
    960 /* channels */,
    960 /* input stride */,
    960 /* output stride */,
    0 /* flags */,
    &op123);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #123" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op123, xnn_delete_operator);

  xnn_operator_t op124 = nullptr;
  status = xnn_create_global_average_pooling_nwc_qu8(
    960 /* channels */, 960 /* input stride */, 960 /* output stride */,
    1 /* input zero point */, 0.2900834381580353 /* input scale */,
    1 /* output zero point */, 0.2900834381580353 /* output scale */,
    0 /* output min */, 255 /* output max */,
    0 /* flags */,
    &op124);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #124" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op124, xnn_delete_operator);

  xnn_operator_t op125 = nullptr;
  status = xnn_create_convolution2d_nhwc_qu8(
    0 /* top padding */, 0 /* right padding */,
    0 /* bottom padding */, 0 /* left padding */,
    1 /* kernel height */, 1 /* kernel width */,
    1 /* subsampling height */, 1 /* subsampling width */,
    1 /* dilation_height */, 1 /* dilation_width */,
    1 /* groups */,
    960 /* input channels per group */,
    1280 /* output_channels_per_group */,
    960 /* input pixel stride */,
    1280 /* output pixel stride */,
    (uint8_t) 1 /* input_zero_point */,
    0.2900834381580353 /* input_scale */,
    (uint8_t) 128 /* kernel_zero_point */,
    0.00735006108880043 /* kernel_scale */,
    w271.data(), w272.data(),
    (uint8_t) 175 /* output_zero_point */,
    0.053266387432813644 /* output_scale */,
    (uint8_t) 0 /* output min */,  (uint8_t) 255 /* output max */,
    0 /* flags */,
    nullptr /* code_cache */,
    nullptr /* weights_cache */,
    &op125);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #125" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op125, xnn_delete_operator);

  xnn_operator_t op126 = nullptr;
  status = xnn_create_copy_nc_x8(
    1280 /* channels */,
    1280 /* input stride */,
    1280 /* output stride */,
    0 /* flags */,
    &op126);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #126" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op126, xnn_delete_operator);

  xnn_operator_t op127 = nullptr;
  status = xnn_create_global_average_pooling_nwc_qu8(
    1280 /* channels */, 1280 /* input stride */, 1280 /* output stride */,
    22 /* input zero point */, 0.017189515754580498 /* input scale */,
    22 /* output zero point */, 0.017189515754580498 /* output scale */,
    0 /* output min */, 255 /* output max */,
    0 /* flags */,
    &op127);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #127" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op127, xnn_delete_operator);

  xnn_operator_t op128 = nullptr;
  status = xnn_create_convolution2d_nhwc_qu8(
    0 /* top padding */, 0 /* right padding */,
    0 /* bottom padding */, 0 /* left padding */,
    1 /* kernel height */, 1 /* kernel width */,
    1 /* subsampling height */, 1 /* subsampling width */,
    1 /* dilation_height */, 1 /* dilation_width */,
    1 /* groups */,
    1280 /* input channels per group */,
    1001 /* output_channels_per_group */,
    1280 /* input pixel stride */,
    1001 /* output pixel stride */,
    (uint8_t) 22 /* input_zero_point */,
    0.017189515754580498 /* input_scale */,
    (uint8_t) 94 /* kernel_zero_point */,
    0.003363430965691805 /* kernel_scale */,
    w273.data(), w274.data(),
    (uint8_t) 77 /* output_zero_point */,
    0.0765276700258255 /* output_scale */,
    (uint8_t) 0 /* output min */,  (uint8_t) 255 /* output max */,
    0 /* flags */,
    nullptr /* code_cache */,
    nullptr /* weights_cache */,
    &op128);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #128" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op128, xnn_delete_operator);

  xnn_operator_t op129 = nullptr;
  status = xnn_create_copy_nc_x8(
    1 /* channels */,
    1 /* input stride */,
    1 /* output stride */,
    0 /* flags */,
    &op129);
  if (status != xnn_status_success) {
    std::cerr << "failed to create operation #129" << std::endl;
    return ExecutionPlan();
  }
  operators.emplace_back(op129, xnn_delete_operator);



{
  size_t op0_workspace_size = 0;
  size_t op0_workspace_alignment = 0;
  status = xnn_reshape_convolution2d_nhwc_qu8(
    op0,
    /*batch_size=*/1, /*input_height=*/224, /*input_width=*/224,
    &op0_workspace_size, &op0_workspace_alignment,
    /*output_height_out=*/nullptr, /*output_width_out=*/nullptr,
    /*threadpool=*/threadpool);
  max_workspace_size = std::max(max_workspace_size, op0_workspace_size);
}
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #0" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_reshape_copy_nc_x8(
    op1,
    /*batch_size=*/12544,
    /*threadpool=*/threadpool);
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #1" << std::endl;
    return ExecutionPlan();
  }

{
  size_t op2_workspace_size = 0;
  size_t op2_workspace_alignment = 0;
  status = xnn_reshape_convolution2d_nhwc_qu8(
    op2,
    /*batch_size=*/1, /*input_height=*/112, /*input_width=*/112,
    &op2_workspace_size, &op2_workspace_alignment,
    /*output_height_out=*/nullptr, /*output_width_out=*/nullptr,
    /*threadpool=*/threadpool);
  max_workspace_size = std::max(max_workspace_size, op2_workspace_size);
}
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #2" << std::endl;
    return ExecutionPlan();
  }

{
  size_t op3_workspace_size = 0;
  size_t op3_workspace_alignment = 0;
  status = xnn_reshape_convolution2d_nhwc_qu8(
    op3,
    /*batch_size=*/1, /*input_height=*/112, /*input_width=*/112,
    &op3_workspace_size, &op3_workspace_alignment,
    /*output_height_out=*/nullptr, /*output_width_out=*/nullptr,
    /*threadpool=*/threadpool);
  max_workspace_size = std::max(max_workspace_size, op3_workspace_size);
}
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #3" << std::endl;
    return ExecutionPlan();
  }

  {
    const size_t a_shape[] = { 1, 112, 112, 16 };
    const size_t b_shape[] = { 1, 112, 112, 16 };
    status = xnn_reshape_add_nd_qu8(
      op4,
      4, a_shape, 4, b_shape,
      /*threadpool=*/threadpool);
  }
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #4" << std::endl;
    return ExecutionPlan();
  }

{
  size_t op5_workspace_size = 0;
  size_t op5_workspace_alignment = 0;
  status = xnn_reshape_convolution2d_nhwc_qu8(
    op5,
    /*batch_size=*/1, /*input_height=*/112, /*input_width=*/112,
    &op5_workspace_size, &op5_workspace_alignment,
    /*output_height_out=*/nullptr, /*output_width_out=*/nullptr,
    /*threadpool=*/threadpool);
  max_workspace_size = std::max(max_workspace_size, op5_workspace_size);
}
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #5" << std::endl;
    return ExecutionPlan();
  }

{
  size_t op6_workspace_size = 0;
  size_t op6_workspace_alignment = 0;
  status = xnn_reshape_convolution2d_nhwc_qu8(
    op6,
    /*batch_size=*/1, /*input_height=*/112, /*input_width=*/112,
    &op6_workspace_size, &op6_workspace_alignment,
    /*output_height_out=*/nullptr, /*output_width_out=*/nullptr,
    /*threadpool=*/threadpool);
  max_workspace_size = std::max(max_workspace_size, op6_workspace_size);
}
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #6" << std::endl;
    return ExecutionPlan();
  }

{
  size_t op7_workspace_size = 0;
  size_t op7_workspace_alignment = 0;
  status = xnn_reshape_convolution2d_nhwc_qu8(
    op7,
    /*batch_size=*/1, /*input_height=*/56, /*input_width=*/56,
    &op7_workspace_size, &op7_workspace_alignment,
    /*output_height_out=*/nullptr, /*output_width_out=*/nullptr,
    /*threadpool=*/threadpool);
  max_workspace_size = std::max(max_workspace_size, op7_workspace_size);
}
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #7" << std::endl;
    return ExecutionPlan();
  }

{
  size_t op8_workspace_size = 0;
  size_t op8_workspace_alignment = 0;
  status = xnn_reshape_convolution2d_nhwc_qu8(
    op8,
    /*batch_size=*/1, /*input_height=*/56, /*input_width=*/56,
    &op8_workspace_size, &op8_workspace_alignment,
    /*output_height_out=*/nullptr, /*output_width_out=*/nullptr,
    /*threadpool=*/threadpool);
  max_workspace_size = std::max(max_workspace_size, op8_workspace_size);
}
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #8" << std::endl;
    return ExecutionPlan();
  }

{
  size_t op9_workspace_size = 0;
  size_t op9_workspace_alignment = 0;
  status = xnn_reshape_convolution2d_nhwc_qu8(
    op9,
    /*batch_size=*/1, /*input_height=*/56, /*input_width=*/56,
    &op9_workspace_size, &op9_workspace_alignment,
    /*output_height_out=*/nullptr, /*output_width_out=*/nullptr,
    /*threadpool=*/threadpool);
  max_workspace_size = std::max(max_workspace_size, op9_workspace_size);
}
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #9" << std::endl;
    return ExecutionPlan();
  }

{
  size_t op10_workspace_size = 0;
  size_t op10_workspace_alignment = 0;
  status = xnn_reshape_convolution2d_nhwc_qu8(
    op10,
    /*batch_size=*/1, /*input_height=*/56, /*input_width=*/56,
    &op10_workspace_size, &op10_workspace_alignment,
    /*output_height_out=*/nullptr, /*output_width_out=*/nullptr,
    /*threadpool=*/threadpool);
  max_workspace_size = std::max(max_workspace_size, op10_workspace_size);
}
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #10" << std::endl;
    return ExecutionPlan();
  }

  {
    const size_t a_shape[] = { 1, 56, 56, 24 };
    const size_t b_shape[] = { 1, 56, 56, 24 };
    status = xnn_reshape_add_nd_qu8(
      op11,
      4, a_shape, 4, b_shape,
      /*threadpool=*/threadpool);
  }
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #11" << std::endl;
    return ExecutionPlan();
  }

{
  size_t op12_workspace_size = 0;
  size_t op12_workspace_alignment = 0;
  status = xnn_reshape_convolution2d_nhwc_qu8(
    op12,
    /*batch_size=*/1, /*input_height=*/56, /*input_width=*/56,
    &op12_workspace_size, &op12_workspace_alignment,
    /*output_height_out=*/nullptr, /*output_width_out=*/nullptr,
    /*threadpool=*/threadpool);
  max_workspace_size = std::max(max_workspace_size, op12_workspace_size);
}
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #12" << std::endl;
    return ExecutionPlan();
  }

{
  size_t op13_workspace_size = 0;
  size_t op13_workspace_alignment = 0;
  status = xnn_reshape_convolution2d_nhwc_qu8(
    op13,
    /*batch_size=*/1, /*input_height=*/56, /*input_width=*/56,
    &op13_workspace_size, &op13_workspace_alignment,
    /*output_height_out=*/nullptr, /*output_width_out=*/nullptr,
    /*threadpool=*/threadpool);
  max_workspace_size = std::max(max_workspace_size, op13_workspace_size);
}
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #13" << std::endl;
    return ExecutionPlan();
  }

  size_t op14_workspace_size = 0;
  size_t op14_workspace_alignment = 0;
  status = xnn_reshape_global_average_pooling_nwc_qu8(
    op14,
    /*batch_size=*/1, 784 /* width */,
    &op14_workspace_size, &op14_workspace_alignment,
    /*threadpool=*/threadpool);
  max_workspace_size = std::max(max_workspace_size, op14_workspace_size);
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #14" << std::endl;
    return ExecutionPlan();
  }

{
  size_t op15_workspace_size = 0;
  size_t op15_workspace_alignment = 0;
  status = xnn_reshape_convolution2d_nhwc_qu8(
    op15,
    /*batch_size=*/1, /*input_height=*/1, /*input_width=*/1,
    &op15_workspace_size, &op15_workspace_alignment,
    /*output_height_out=*/nullptr, /*output_width_out=*/nullptr,
    /*threadpool=*/threadpool);
  max_workspace_size = std::max(max_workspace_size, op15_workspace_size);
}
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #15" << std::endl;
    return ExecutionPlan();
  }

{
  size_t op16_workspace_size = 0;
  size_t op16_workspace_alignment = 0;
  status = xnn_reshape_convolution2d_nhwc_qu8(
    op16,
    /*batch_size=*/1, /*input_height=*/1, /*input_width=*/1,
    &op16_workspace_size, &op16_workspace_alignment,
    /*output_height_out=*/nullptr, /*output_width_out=*/nullptr,
    /*threadpool=*/threadpool);
  max_workspace_size = std::max(max_workspace_size, op16_workspace_size);
}
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #16" << std::endl;
    return ExecutionPlan();
  }

  {
    const size_t a_shape[] = { 1, 1, 1, 72 };
    const size_t b_shape[] = { 1 };
    status = xnn_reshape_add_nd_qu8(
      op17,
      4, a_shape, 1, b_shape,
      /*threadpool=*/threadpool);
  }
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #17" << std::endl;
    return ExecutionPlan();
  }

  {
    const size_t a_shape[] = { 1, 1, 1, 72 };
    const size_t b_shape[] = { 1 };
    status = xnn_reshape_multiply_nd_qu8(
      op18,
      4, a_shape, 1, b_shape,
      /*threadpool=*/threadpool);
  }
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #18" << std::endl;
    return ExecutionPlan();
  }

  {
    const size_t a_shape[] = { 1, 28, 28, 72 };
    const size_t b_shape[] = { 1, 1, 1, 72 };
    status = xnn_reshape_multiply_nd_qu8(
      op19,
      4, a_shape, 4, b_shape,
      /*threadpool=*/threadpool);
  }
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #19" << std::endl;
    return ExecutionPlan();
  }

{
  size_t op20_workspace_size = 0;
  size_t op20_workspace_alignment = 0;
  status = xnn_reshape_convolution2d_nhwc_qu8(
    op20,
    /*batch_size=*/1, /*input_height=*/28, /*input_width=*/28,
    &op20_workspace_size, &op20_workspace_alignment,
    /*output_height_out=*/nullptr, /*output_width_out=*/nullptr,
    /*threadpool=*/threadpool);
  max_workspace_size = std::max(max_workspace_size, op20_workspace_size);
}
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #20" << std::endl;
    return ExecutionPlan();
  }

{
  size_t op21_workspace_size = 0;
  size_t op21_workspace_alignment = 0;
  status = xnn_reshape_convolution2d_nhwc_qu8(
    op21,
    /*batch_size=*/1, /*input_height=*/28, /*input_width=*/28,
    &op21_workspace_size, &op21_workspace_alignment,
    /*output_height_out=*/nullptr, /*output_width_out=*/nullptr,
    /*threadpool=*/threadpool);
  max_workspace_size = std::max(max_workspace_size, op21_workspace_size);
}
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #21" << std::endl;
    return ExecutionPlan();
  }

{
  size_t op22_workspace_size = 0;
  size_t op22_workspace_alignment = 0;
  status = xnn_reshape_convolution2d_nhwc_qu8(
    op22,
    /*batch_size=*/1, /*input_height=*/28, /*input_width=*/28,
    &op22_workspace_size, &op22_workspace_alignment,
    /*output_height_out=*/nullptr, /*output_width_out=*/nullptr,
    /*threadpool=*/threadpool);
  max_workspace_size = std::max(max_workspace_size, op22_workspace_size);
}
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #22" << std::endl;
    return ExecutionPlan();
  }

  size_t op23_workspace_size = 0;
  size_t op23_workspace_alignment = 0;
  status = xnn_reshape_global_average_pooling_nwc_qu8(
    op23,
    /*batch_size=*/1, 784 /* width */,
    &op23_workspace_size, &op23_workspace_alignment,
    /*threadpool=*/threadpool);
  max_workspace_size = std::max(max_workspace_size, op23_workspace_size);
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #23" << std::endl;
    return ExecutionPlan();
  }

{
  size_t op24_workspace_size = 0;
  size_t op24_workspace_alignment = 0;
  status = xnn_reshape_convolution2d_nhwc_qu8(
    op24,
    /*batch_size=*/1, /*input_height=*/1, /*input_width=*/1,
    &op24_workspace_size, &op24_workspace_alignment,
    /*output_height_out=*/nullptr, /*output_width_out=*/nullptr,
    /*threadpool=*/threadpool);
  max_workspace_size = std::max(max_workspace_size, op24_workspace_size);
}
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #24" << std::endl;
    return ExecutionPlan();
  }

{
  size_t op25_workspace_size = 0;
  size_t op25_workspace_alignment = 0;
  status = xnn_reshape_convolution2d_nhwc_qu8(
    op25,
    /*batch_size=*/1, /*input_height=*/1, /*input_width=*/1,
    &op25_workspace_size, &op25_workspace_alignment,
    /*output_height_out=*/nullptr, /*output_width_out=*/nullptr,
    /*threadpool=*/threadpool);
  max_workspace_size = std::max(max_workspace_size, op25_workspace_size);
}
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #25" << std::endl;
    return ExecutionPlan();
  }

  {
    const size_t a_shape[] = { 1, 1, 1, 120 };
    const size_t b_shape[] = { 1 };
    status = xnn_reshape_add_nd_qu8(
      op26,
      4, a_shape, 1, b_shape,
      /*threadpool=*/threadpool);
  }
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #26" << std::endl;
    return ExecutionPlan();
  }

  {
    const size_t a_shape[] = { 1, 1, 1, 120 };
    const size_t b_shape[] = { 1 };
    status = xnn_reshape_multiply_nd_qu8(
      op27,
      4, a_shape, 1, b_shape,
      /*threadpool=*/threadpool);
  }
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #27" << std::endl;
    return ExecutionPlan();
  }

  {
    const size_t a_shape[] = { 1, 28, 28, 120 };
    const size_t b_shape[] = { 1, 1, 1, 120 };
    status = xnn_reshape_multiply_nd_qu8(
      op28,
      4, a_shape, 4, b_shape,
      /*threadpool=*/threadpool);
  }
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #28" << std::endl;
    return ExecutionPlan();
  }

{
  size_t op29_workspace_size = 0;
  size_t op29_workspace_alignment = 0;
  status = xnn_reshape_convolution2d_nhwc_qu8(
    op29,
    /*batch_size=*/1, /*input_height=*/28, /*input_width=*/28,
    &op29_workspace_size, &op29_workspace_alignment,
    /*output_height_out=*/nullptr, /*output_width_out=*/nullptr,
    /*threadpool=*/threadpool);
  max_workspace_size = std::max(max_workspace_size, op29_workspace_size);
}
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #29" << std::endl;
    return ExecutionPlan();
  }

  {
    const size_t a_shape[] = { 1, 28, 28, 40 };
    const size_t b_shape[] = { 1, 28, 28, 40 };
    status = xnn_reshape_add_nd_qu8(
      op30,
      4, a_shape, 4, b_shape,
      /*threadpool=*/threadpool);
  }
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #30" << std::endl;
    return ExecutionPlan();
  }

{
  size_t op31_workspace_size = 0;
  size_t op31_workspace_alignment = 0;
  status = xnn_reshape_convolution2d_nhwc_qu8(
    op31,
    /*batch_size=*/1, /*input_height=*/28, /*input_width=*/28,
    &op31_workspace_size, &op31_workspace_alignment,
    /*output_height_out=*/nullptr, /*output_width_out=*/nullptr,
    /*threadpool=*/threadpool);
  max_workspace_size = std::max(max_workspace_size, op31_workspace_size);
}
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #31" << std::endl;
    return ExecutionPlan();
  }

{
  size_t op32_workspace_size = 0;
  size_t op32_workspace_alignment = 0;
  status = xnn_reshape_convolution2d_nhwc_qu8(
    op32,
    /*batch_size=*/1, /*input_height=*/28, /*input_width=*/28,
    &op32_workspace_size, &op32_workspace_alignment,
    /*output_height_out=*/nullptr, /*output_width_out=*/nullptr,
    /*threadpool=*/threadpool);
  max_workspace_size = std::max(max_workspace_size, op32_workspace_size);
}
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #32" << std::endl;
    return ExecutionPlan();
  }

  size_t op33_workspace_size = 0;
  size_t op33_workspace_alignment = 0;
  status = xnn_reshape_global_average_pooling_nwc_qu8(
    op33,
    /*batch_size=*/1, 784 /* width */,
    &op33_workspace_size, &op33_workspace_alignment,
    /*threadpool=*/threadpool);
  max_workspace_size = std::max(max_workspace_size, op33_workspace_size);
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #33" << std::endl;
    return ExecutionPlan();
  }

{
  size_t op34_workspace_size = 0;
  size_t op34_workspace_alignment = 0;
  status = xnn_reshape_convolution2d_nhwc_qu8(
    op34,
    /*batch_size=*/1, /*input_height=*/1, /*input_width=*/1,
    &op34_workspace_size, &op34_workspace_alignment,
    /*output_height_out=*/nullptr, /*output_width_out=*/nullptr,
    /*threadpool=*/threadpool);
  max_workspace_size = std::max(max_workspace_size, op34_workspace_size);
}
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #34" << std::endl;
    return ExecutionPlan();
  }

{
  size_t op35_workspace_size = 0;
  size_t op35_workspace_alignment = 0;
  status = xnn_reshape_convolution2d_nhwc_qu8(
    op35,
    /*batch_size=*/1, /*input_height=*/1, /*input_width=*/1,
    &op35_workspace_size, &op35_workspace_alignment,
    /*output_height_out=*/nullptr, /*output_width_out=*/nullptr,
    /*threadpool=*/threadpool);
  max_workspace_size = std::max(max_workspace_size, op35_workspace_size);
}
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #35" << std::endl;
    return ExecutionPlan();
  }

  {
    const size_t a_shape[] = { 1, 1, 1, 120 };
    const size_t b_shape[] = { 1 };
    status = xnn_reshape_add_nd_qu8(
      op36,
      4, a_shape, 1, b_shape,
      /*threadpool=*/threadpool);
  }
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #36" << std::endl;
    return ExecutionPlan();
  }

  {
    const size_t a_shape[] = { 1, 1, 1, 120 };
    const size_t b_shape[] = { 1 };
    status = xnn_reshape_multiply_nd_qu8(
      op37,
      4, a_shape, 1, b_shape,
      /*threadpool=*/threadpool);
  }
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #37" << std::endl;
    return ExecutionPlan();
  }

  {
    const size_t a_shape[] = { 1, 28, 28, 120 };
    const size_t b_shape[] = { 1, 1, 1, 120 };
    status = xnn_reshape_multiply_nd_qu8(
      op38,
      4, a_shape, 4, b_shape,
      /*threadpool=*/threadpool);
  }
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #38" << std::endl;
    return ExecutionPlan();
  }

{
  size_t op39_workspace_size = 0;
  size_t op39_workspace_alignment = 0;
  status = xnn_reshape_convolution2d_nhwc_qu8(
    op39,
    /*batch_size=*/1, /*input_height=*/28, /*input_width=*/28,
    &op39_workspace_size, &op39_workspace_alignment,
    /*output_height_out=*/nullptr, /*output_width_out=*/nullptr,
    /*threadpool=*/threadpool);
  max_workspace_size = std::max(max_workspace_size, op39_workspace_size);
}
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #39" << std::endl;
    return ExecutionPlan();
  }

  {
    const size_t a_shape[] = { 1, 28, 28, 40 };
    const size_t b_shape[] = { 1, 28, 28, 40 };
    status = xnn_reshape_add_nd_qu8(
      op40,
      4, a_shape, 4, b_shape,
      /*threadpool=*/threadpool);
  }
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #40" << std::endl;
    return ExecutionPlan();
  }

{
  size_t op41_workspace_size = 0;
  size_t op41_workspace_alignment = 0;
  status = xnn_reshape_convolution2d_nhwc_qu8(
    op41,
    /*batch_size=*/1, /*input_height=*/28, /*input_width=*/28,
    &op41_workspace_size, &op41_workspace_alignment,
    /*output_height_out=*/nullptr, /*output_width_out=*/nullptr,
    /*threadpool=*/threadpool);
  max_workspace_size = std::max(max_workspace_size, op41_workspace_size);
}
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #41" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_reshape_copy_nc_x8(
    op42,
    /*batch_size=*/784,
    /*threadpool=*/threadpool);
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #42" << std::endl;
    return ExecutionPlan();
  }

{
  size_t op43_workspace_size = 0;
  size_t op43_workspace_alignment = 0;
  status = xnn_reshape_convolution2d_nhwc_qu8(
    op43,
    /*batch_size=*/1, /*input_height=*/28, /*input_width=*/28,
    &op43_workspace_size, &op43_workspace_alignment,
    /*output_height_out=*/nullptr, /*output_width_out=*/nullptr,
    /*threadpool=*/threadpool);
  max_workspace_size = std::max(max_workspace_size, op43_workspace_size);
}
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #43" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_reshape_copy_nc_x8(
    op44,
    /*batch_size=*/196,
    /*threadpool=*/threadpool);
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #44" << std::endl;
    return ExecutionPlan();
  }

{
  size_t op45_workspace_size = 0;
  size_t op45_workspace_alignment = 0;
  status = xnn_reshape_convolution2d_nhwc_qu8(
    op45,
    /*batch_size=*/1, /*input_height=*/14, /*input_width=*/14,
    &op45_workspace_size, &op45_workspace_alignment,
    /*output_height_out=*/nullptr, /*output_width_out=*/nullptr,
    /*threadpool=*/threadpool);
  max_workspace_size = std::max(max_workspace_size, op45_workspace_size);
}
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #45" << std::endl;
    return ExecutionPlan();
  }

{
  size_t op46_workspace_size = 0;
  size_t op46_workspace_alignment = 0;
  status = xnn_reshape_convolution2d_nhwc_qu8(
    op46,
    /*batch_size=*/1, /*input_height=*/14, /*input_width=*/14,
    &op46_workspace_size, &op46_workspace_alignment,
    /*output_height_out=*/nullptr, /*output_width_out=*/nullptr,
    /*threadpool=*/threadpool);
  max_workspace_size = std::max(max_workspace_size, op46_workspace_size);
}
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #46" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_reshape_copy_nc_x8(
    op47,
    /*batch_size=*/196,
    /*threadpool=*/threadpool);
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #47" << std::endl;
    return ExecutionPlan();
  }

{
  size_t op48_workspace_size = 0;
  size_t op48_workspace_alignment = 0;
  status = xnn_reshape_convolution2d_nhwc_qu8(
    op48,
    /*batch_size=*/1, /*input_height=*/14, /*input_width=*/14,
    &op48_workspace_size, &op48_workspace_alignment,
    /*output_height_out=*/nullptr, /*output_width_out=*/nullptr,
    /*threadpool=*/threadpool);
  max_workspace_size = std::max(max_workspace_size, op48_workspace_size);
}
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #48" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_reshape_copy_nc_x8(
    op49,
    /*batch_size=*/196,
    /*threadpool=*/threadpool);
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #49" << std::endl;
    return ExecutionPlan();
  }

{
  size_t op50_workspace_size = 0;
  size_t op50_workspace_alignment = 0;
  status = xnn_reshape_convolution2d_nhwc_qu8(
    op50,
    /*batch_size=*/1, /*input_height=*/14, /*input_width=*/14,
    &op50_workspace_size, &op50_workspace_alignment,
    /*output_height_out=*/nullptr, /*output_width_out=*/nullptr,
    /*threadpool=*/threadpool);
  max_workspace_size = std::max(max_workspace_size, op50_workspace_size);
}
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #50" << std::endl;
    return ExecutionPlan();
  }

  {
    const size_t a_shape[] = { 1, 14, 14, 80 };
    const size_t b_shape[] = { 1, 14, 14, 80 };
    status = xnn_reshape_add_nd_qu8(
      op51,
      4, a_shape, 4, b_shape,
      /*threadpool=*/threadpool);
  }
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #51" << std::endl;
    return ExecutionPlan();
  }

{
  size_t op52_workspace_size = 0;
  size_t op52_workspace_alignment = 0;
  status = xnn_reshape_convolution2d_nhwc_qu8(
    op52,
    /*batch_size=*/1, /*input_height=*/14, /*input_width=*/14,
    &op52_workspace_size, &op52_workspace_alignment,
    /*output_height_out=*/nullptr, /*output_width_out=*/nullptr,
    /*threadpool=*/threadpool);
  max_workspace_size = std::max(max_workspace_size, op52_workspace_size);
}
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #52" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_reshape_copy_nc_x8(
    op53,
    /*batch_size=*/196,
    /*threadpool=*/threadpool);
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #53" << std::endl;
    return ExecutionPlan();
  }

{
  size_t op54_workspace_size = 0;
  size_t op54_workspace_alignment = 0;
  status = xnn_reshape_convolution2d_nhwc_qu8(
    op54,
    /*batch_size=*/1, /*input_height=*/14, /*input_width=*/14,
    &op54_workspace_size, &op54_workspace_alignment,
    /*output_height_out=*/nullptr, /*output_width_out=*/nullptr,
    /*threadpool=*/threadpool);
  max_workspace_size = std::max(max_workspace_size, op54_workspace_size);
}
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #54" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_reshape_copy_nc_x8(
    op55,
    /*batch_size=*/196,
    /*threadpool=*/threadpool);
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #55" << std::endl;
    return ExecutionPlan();
  }

{
  size_t op56_workspace_size = 0;
  size_t op56_workspace_alignment = 0;
  status = xnn_reshape_convolution2d_nhwc_qu8(
    op56,
    /*batch_size=*/1, /*input_height=*/14, /*input_width=*/14,
    &op56_workspace_size, &op56_workspace_alignment,
    /*output_height_out=*/nullptr, /*output_width_out=*/nullptr,
    /*threadpool=*/threadpool);
  max_workspace_size = std::max(max_workspace_size, op56_workspace_size);
}
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #56" << std::endl;
    return ExecutionPlan();
  }

  {
    const size_t a_shape[] = { 1, 14, 14, 80 };
    const size_t b_shape[] = { 1, 14, 14, 80 };
    status = xnn_reshape_add_nd_qu8(
      op57,
      4, a_shape, 4, b_shape,
      /*threadpool=*/threadpool);
  }
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #57" << std::endl;
    return ExecutionPlan();
  }

{
  size_t op58_workspace_size = 0;
  size_t op58_workspace_alignment = 0;
  status = xnn_reshape_convolution2d_nhwc_qu8(
    op58,
    /*batch_size=*/1, /*input_height=*/14, /*input_width=*/14,
    &op58_workspace_size, &op58_workspace_alignment,
    /*output_height_out=*/nullptr, /*output_width_out=*/nullptr,
    /*threadpool=*/threadpool);
  max_workspace_size = std::max(max_workspace_size, op58_workspace_size);
}
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #58" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_reshape_copy_nc_x8(
    op59,
    /*batch_size=*/196,
    /*threadpool=*/threadpool);
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #59" << std::endl;
    return ExecutionPlan();
  }

{
  size_t op60_workspace_size = 0;
  size_t op60_workspace_alignment = 0;
  status = xnn_reshape_convolution2d_nhwc_qu8(
    op60,
    /*batch_size=*/1, /*input_height=*/14, /*input_width=*/14,
    &op60_workspace_size, &op60_workspace_alignment,
    /*output_height_out=*/nullptr, /*output_width_out=*/nullptr,
    /*threadpool=*/threadpool);
  max_workspace_size = std::max(max_workspace_size, op60_workspace_size);
}
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #60" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_reshape_copy_nc_x8(
    op61,
    /*batch_size=*/196,
    /*threadpool=*/threadpool);
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #61" << std::endl;
    return ExecutionPlan();
  }

{
  size_t op62_workspace_size = 0;
  size_t op62_workspace_alignment = 0;
  status = xnn_reshape_convolution2d_nhwc_qu8(
    op62,
    /*batch_size=*/1, /*input_height=*/14, /*input_width=*/14,
    &op62_workspace_size, &op62_workspace_alignment,
    /*output_height_out=*/nullptr, /*output_width_out=*/nullptr,
    /*threadpool=*/threadpool);
  max_workspace_size = std::max(max_workspace_size, op62_workspace_size);
}
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #62" << std::endl;
    return ExecutionPlan();
  }

  {
    const size_t a_shape[] = { 1, 14, 14, 80 };
    const size_t b_shape[] = { 1, 14, 14, 80 };
    status = xnn_reshape_add_nd_qu8(
      op63,
      4, a_shape, 4, b_shape,
      /*threadpool=*/threadpool);
  }
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #63" << std::endl;
    return ExecutionPlan();
  }

{
  size_t op64_workspace_size = 0;
  size_t op64_workspace_alignment = 0;
  status = xnn_reshape_convolution2d_nhwc_qu8(
    op64,
    /*batch_size=*/1, /*input_height=*/14, /*input_width=*/14,
    &op64_workspace_size, &op64_workspace_alignment,
    /*output_height_out=*/nullptr, /*output_width_out=*/nullptr,
    /*threadpool=*/threadpool);
  max_workspace_size = std::max(max_workspace_size, op64_workspace_size);
}
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #64" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_reshape_copy_nc_x8(
    op65,
    /*batch_size=*/196,
    /*threadpool=*/threadpool);
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #65" << std::endl;
    return ExecutionPlan();
  }

{
  size_t op66_workspace_size = 0;
  size_t op66_workspace_alignment = 0;
  status = xnn_reshape_convolution2d_nhwc_qu8(
    op66,
    /*batch_size=*/1, /*input_height=*/14, /*input_width=*/14,
    &op66_workspace_size, &op66_workspace_alignment,
    /*output_height_out=*/nullptr, /*output_width_out=*/nullptr,
    /*threadpool=*/threadpool);
  max_workspace_size = std::max(max_workspace_size, op66_workspace_size);
}
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #66" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_reshape_copy_nc_x8(
    op67,
    /*batch_size=*/196,
    /*threadpool=*/threadpool);
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #67" << std::endl;
    return ExecutionPlan();
  }

  size_t op68_workspace_size = 0;
  size_t op68_workspace_alignment = 0;
  status = xnn_reshape_global_average_pooling_nwc_qu8(
    op68,
    /*batch_size=*/1, 196 /* width */,
    &op68_workspace_size, &op68_workspace_alignment,
    /*threadpool=*/threadpool);
  max_workspace_size = std::max(max_workspace_size, op68_workspace_size);
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #68" << std::endl;
    return ExecutionPlan();
  }

{
  size_t op69_workspace_size = 0;
  size_t op69_workspace_alignment = 0;
  status = xnn_reshape_convolution2d_nhwc_qu8(
    op69,
    /*batch_size=*/1, /*input_height=*/1, /*input_width=*/1,
    &op69_workspace_size, &op69_workspace_alignment,
    /*output_height_out=*/nullptr, /*output_width_out=*/nullptr,
    /*threadpool=*/threadpool);
  max_workspace_size = std::max(max_workspace_size, op69_workspace_size);
}
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #69" << std::endl;
    return ExecutionPlan();
  }

{
  size_t op70_workspace_size = 0;
  size_t op70_workspace_alignment = 0;
  status = xnn_reshape_convolution2d_nhwc_qu8(
    op70,
    /*batch_size=*/1, /*input_height=*/1, /*input_width=*/1,
    &op70_workspace_size, &op70_workspace_alignment,
    /*output_height_out=*/nullptr, /*output_width_out=*/nullptr,
    /*threadpool=*/threadpool);
  max_workspace_size = std::max(max_workspace_size, op70_workspace_size);
}
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #70" << std::endl;
    return ExecutionPlan();
  }

  {
    const size_t a_shape[] = { 1, 1, 1, 480 };
    const size_t b_shape[] = { 1 };
    status = xnn_reshape_add_nd_qu8(
      op71,
      4, a_shape, 1, b_shape,
      /*threadpool=*/threadpool);
  }
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #71" << std::endl;
    return ExecutionPlan();
  }

  {
    const size_t a_shape[] = { 1, 1, 1, 480 };
    const size_t b_shape[] = { 1 };
    status = xnn_reshape_multiply_nd_qu8(
      op72,
      4, a_shape, 1, b_shape,
      /*threadpool=*/threadpool);
  }
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #72" << std::endl;
    return ExecutionPlan();
  }

  {
    const size_t a_shape[] = { 1, 14, 14, 480 };
    const size_t b_shape[] = { 1, 1, 1, 480 };
    status = xnn_reshape_multiply_nd_qu8(
      op73,
      4, a_shape, 4, b_shape,
      /*threadpool=*/threadpool);
  }
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #73" << std::endl;
    return ExecutionPlan();
  }

{
  size_t op74_workspace_size = 0;
  size_t op74_workspace_alignment = 0;
  status = xnn_reshape_convolution2d_nhwc_qu8(
    op74,
    /*batch_size=*/1, /*input_height=*/14, /*input_width=*/14,
    &op74_workspace_size, &op74_workspace_alignment,
    /*output_height_out=*/nullptr, /*output_width_out=*/nullptr,
    /*threadpool=*/threadpool);
  max_workspace_size = std::max(max_workspace_size, op74_workspace_size);
}
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #74" << std::endl;
    return ExecutionPlan();
  }

{
  size_t op75_workspace_size = 0;
  size_t op75_workspace_alignment = 0;
  status = xnn_reshape_convolution2d_nhwc_qu8(
    op75,
    /*batch_size=*/1, /*input_height=*/14, /*input_width=*/14,
    &op75_workspace_size, &op75_workspace_alignment,
    /*output_height_out=*/nullptr, /*output_width_out=*/nullptr,
    /*threadpool=*/threadpool);
  max_workspace_size = std::max(max_workspace_size, op75_workspace_size);
}
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #75" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_reshape_copy_nc_x8(
    op76,
    /*batch_size=*/196,
    /*threadpool=*/threadpool);
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #76" << std::endl;
    return ExecutionPlan();
  }

{
  size_t op77_workspace_size = 0;
  size_t op77_workspace_alignment = 0;
  status = xnn_reshape_convolution2d_nhwc_qu8(
    op77,
    /*batch_size=*/1, /*input_height=*/14, /*input_width=*/14,
    &op77_workspace_size, &op77_workspace_alignment,
    /*output_height_out=*/nullptr, /*output_width_out=*/nullptr,
    /*threadpool=*/threadpool);
  max_workspace_size = std::max(max_workspace_size, op77_workspace_size);
}
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #77" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_reshape_copy_nc_x8(
    op78,
    /*batch_size=*/196,
    /*threadpool=*/threadpool);
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #78" << std::endl;
    return ExecutionPlan();
  }

  size_t op79_workspace_size = 0;
  size_t op79_workspace_alignment = 0;
  status = xnn_reshape_global_average_pooling_nwc_qu8(
    op79,
    /*batch_size=*/1, 196 /* width */,
    &op79_workspace_size, &op79_workspace_alignment,
    /*threadpool=*/threadpool);
  max_workspace_size = std::max(max_workspace_size, op79_workspace_size);
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #79" << std::endl;
    return ExecutionPlan();
  }

{
  size_t op80_workspace_size = 0;
  size_t op80_workspace_alignment = 0;
  status = xnn_reshape_convolution2d_nhwc_qu8(
    op80,
    /*batch_size=*/1, /*input_height=*/1, /*input_width=*/1,
    &op80_workspace_size, &op80_workspace_alignment,
    /*output_height_out=*/nullptr, /*output_width_out=*/nullptr,
    /*threadpool=*/threadpool);
  max_workspace_size = std::max(max_workspace_size, op80_workspace_size);
}
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #80" << std::endl;
    return ExecutionPlan();
  }

{
  size_t op81_workspace_size = 0;
  size_t op81_workspace_alignment = 0;
  status = xnn_reshape_convolution2d_nhwc_qu8(
    op81,
    /*batch_size=*/1, /*input_height=*/1, /*input_width=*/1,
    &op81_workspace_size, &op81_workspace_alignment,
    /*output_height_out=*/nullptr, /*output_width_out=*/nullptr,
    /*threadpool=*/threadpool);
  max_workspace_size = std::max(max_workspace_size, op81_workspace_size);
}
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #81" << std::endl;
    return ExecutionPlan();
  }

  {
    const size_t a_shape[] = { 1, 1, 1, 672 };
    const size_t b_shape[] = { 1 };
    status = xnn_reshape_add_nd_qu8(
      op82,
      4, a_shape, 1, b_shape,
      /*threadpool=*/threadpool);
  }
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #82" << std::endl;
    return ExecutionPlan();
  }

  {
    const size_t a_shape[] = { 1, 1, 1, 672 };
    const size_t b_shape[] = { 1 };
    status = xnn_reshape_multiply_nd_qu8(
      op83,
      4, a_shape, 1, b_shape,
      /*threadpool=*/threadpool);
  }
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #83" << std::endl;
    return ExecutionPlan();
  }

  {
    const size_t a_shape[] = { 1, 14, 14, 672 };
    const size_t b_shape[] = { 1, 1, 1, 672 };
    status = xnn_reshape_multiply_nd_qu8(
      op84,
      4, a_shape, 4, b_shape,
      /*threadpool=*/threadpool);
  }
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #84" << std::endl;
    return ExecutionPlan();
  }

{
  size_t op85_workspace_size = 0;
  size_t op85_workspace_alignment = 0;
  status = xnn_reshape_convolution2d_nhwc_qu8(
    op85,
    /*batch_size=*/1, /*input_height=*/14, /*input_width=*/14,
    &op85_workspace_size, &op85_workspace_alignment,
    /*output_height_out=*/nullptr, /*output_width_out=*/nullptr,
    /*threadpool=*/threadpool);
  max_workspace_size = std::max(max_workspace_size, op85_workspace_size);
}
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #85" << std::endl;
    return ExecutionPlan();
  }

  {
    const size_t a_shape[] = { 1, 14, 14, 112 };
    const size_t b_shape[] = { 1, 14, 14, 112 };
    status = xnn_reshape_add_nd_qu8(
      op86,
      4, a_shape, 4, b_shape,
      /*threadpool=*/threadpool);
  }
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #86" << std::endl;
    return ExecutionPlan();
  }

{
  size_t op87_workspace_size = 0;
  size_t op87_workspace_alignment = 0;
  status = xnn_reshape_convolution2d_nhwc_qu8(
    op87,
    /*batch_size=*/1, /*input_height=*/14, /*input_width=*/14,
    &op87_workspace_size, &op87_workspace_alignment,
    /*output_height_out=*/nullptr, /*output_width_out=*/nullptr,
    /*threadpool=*/threadpool);
  max_workspace_size = std::max(max_workspace_size, op87_workspace_size);
}
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #87" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_reshape_copy_nc_x8(
    op88,
    /*batch_size=*/196,
    /*threadpool=*/threadpool);
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #88" << std::endl;
    return ExecutionPlan();
  }

{
  size_t op89_workspace_size = 0;
  size_t op89_workspace_alignment = 0;
  status = xnn_reshape_convolution2d_nhwc_qu8(
    op89,
    /*batch_size=*/1, /*input_height=*/14, /*input_width=*/14,
    &op89_workspace_size, &op89_workspace_alignment,
    /*output_height_out=*/nullptr, /*output_width_out=*/nullptr,
    /*threadpool=*/threadpool);
  max_workspace_size = std::max(max_workspace_size, op89_workspace_size);
}
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #89" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_reshape_copy_nc_x8(
    op90,
    /*batch_size=*/49,
    /*threadpool=*/threadpool);
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #90" << std::endl;
    return ExecutionPlan();
  }

  size_t op91_workspace_size = 0;
  size_t op91_workspace_alignment = 0;
  status = xnn_reshape_global_average_pooling_nwc_qu8(
    op91,
    /*batch_size=*/1, 49 /* width */,
    &op91_workspace_size, &op91_workspace_alignment,
    /*threadpool=*/threadpool);
  max_workspace_size = std::max(max_workspace_size, op91_workspace_size);
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #91" << std::endl;
    return ExecutionPlan();
  }

{
  size_t op92_workspace_size = 0;
  size_t op92_workspace_alignment = 0;
  status = xnn_reshape_convolution2d_nhwc_qu8(
    op92,
    /*batch_size=*/1, /*input_height=*/1, /*input_width=*/1,
    &op92_workspace_size, &op92_workspace_alignment,
    /*output_height_out=*/nullptr, /*output_width_out=*/nullptr,
    /*threadpool=*/threadpool);
  max_workspace_size = std::max(max_workspace_size, op92_workspace_size);
}
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #92" << std::endl;
    return ExecutionPlan();
  }

{
  size_t op93_workspace_size = 0;
  size_t op93_workspace_alignment = 0;
  status = xnn_reshape_convolution2d_nhwc_qu8(
    op93,
    /*batch_size=*/1, /*input_height=*/1, /*input_width=*/1,
    &op93_workspace_size, &op93_workspace_alignment,
    /*output_height_out=*/nullptr, /*output_width_out=*/nullptr,
    /*threadpool=*/threadpool);
  max_workspace_size = std::max(max_workspace_size, op93_workspace_size);
}
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #93" << std::endl;
    return ExecutionPlan();
  }

  {
    const size_t a_shape[] = { 1, 1, 1, 672 };
    const size_t b_shape[] = { 1 };
    status = xnn_reshape_add_nd_qu8(
      op94,
      4, a_shape, 1, b_shape,
      /*threadpool=*/threadpool);
  }
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #94" << std::endl;
    return ExecutionPlan();
  }

  {
    const size_t a_shape[] = { 1, 1, 1, 672 };
    const size_t b_shape[] = { 1 };
    status = xnn_reshape_multiply_nd_qu8(
      op95,
      4, a_shape, 1, b_shape,
      /*threadpool=*/threadpool);
  }
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #95" << std::endl;
    return ExecutionPlan();
  }

  {
    const size_t a_shape[] = { 1, 7, 7, 672 };
    const size_t b_shape[] = { 1, 1, 1, 672 };
    status = xnn_reshape_multiply_nd_qu8(
      op96,
      4, a_shape, 4, b_shape,
      /*threadpool=*/threadpool);
  }
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #96" << std::endl;
    return ExecutionPlan();
  }

{
  size_t op97_workspace_size = 0;
  size_t op97_workspace_alignment = 0;
  status = xnn_reshape_convolution2d_nhwc_qu8(
    op97,
    /*batch_size=*/1, /*input_height=*/7, /*input_width=*/7,
    &op97_workspace_size, &op97_workspace_alignment,
    /*output_height_out=*/nullptr, /*output_width_out=*/nullptr,
    /*threadpool=*/threadpool);
  max_workspace_size = std::max(max_workspace_size, op97_workspace_size);
}
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #97" << std::endl;
    return ExecutionPlan();
  }

{
  size_t op98_workspace_size = 0;
  size_t op98_workspace_alignment = 0;
  status = xnn_reshape_convolution2d_nhwc_qu8(
    op98,
    /*batch_size=*/1, /*input_height=*/7, /*input_width=*/7,
    &op98_workspace_size, &op98_workspace_alignment,
    /*output_height_out=*/nullptr, /*output_width_out=*/nullptr,
    /*threadpool=*/threadpool);
  max_workspace_size = std::max(max_workspace_size, op98_workspace_size);
}
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #98" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_reshape_copy_nc_x8(
    op99,
    /*batch_size=*/49,
    /*threadpool=*/threadpool);
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #99" << std::endl;
    return ExecutionPlan();
  }

{
  size_t op100_workspace_size = 0;
  size_t op100_workspace_alignment = 0;
  status = xnn_reshape_convolution2d_nhwc_qu8(
    op100,
    /*batch_size=*/1, /*input_height=*/7, /*input_width=*/7,
    &op100_workspace_size, &op100_workspace_alignment,
    /*output_height_out=*/nullptr, /*output_width_out=*/nullptr,
    /*threadpool=*/threadpool);
  max_workspace_size = std::max(max_workspace_size, op100_workspace_size);
}
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #100" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_reshape_copy_nc_x8(
    op101,
    /*batch_size=*/49,
    /*threadpool=*/threadpool);
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #101" << std::endl;
    return ExecutionPlan();
  }

  size_t op102_workspace_size = 0;
  size_t op102_workspace_alignment = 0;
  status = xnn_reshape_global_average_pooling_nwc_qu8(
    op102,
    /*batch_size=*/1, 49 /* width */,
    &op102_workspace_size, &op102_workspace_alignment,
    /*threadpool=*/threadpool);
  max_workspace_size = std::max(max_workspace_size, op102_workspace_size);
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #102" << std::endl;
    return ExecutionPlan();
  }

{
  size_t op103_workspace_size = 0;
  size_t op103_workspace_alignment = 0;
  status = xnn_reshape_convolution2d_nhwc_qu8(
    op103,
    /*batch_size=*/1, /*input_height=*/1, /*input_width=*/1,
    &op103_workspace_size, &op103_workspace_alignment,
    /*output_height_out=*/nullptr, /*output_width_out=*/nullptr,
    /*threadpool=*/threadpool);
  max_workspace_size = std::max(max_workspace_size, op103_workspace_size);
}
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #103" << std::endl;
    return ExecutionPlan();
  }

{
  size_t op104_workspace_size = 0;
  size_t op104_workspace_alignment = 0;
  status = xnn_reshape_convolution2d_nhwc_qu8(
    op104,
    /*batch_size=*/1, /*input_height=*/1, /*input_width=*/1,
    &op104_workspace_size, &op104_workspace_alignment,
    /*output_height_out=*/nullptr, /*output_width_out=*/nullptr,
    /*threadpool=*/threadpool);
  max_workspace_size = std::max(max_workspace_size, op104_workspace_size);
}
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #104" << std::endl;
    return ExecutionPlan();
  }

  {
    const size_t a_shape[] = { 1, 1, 1, 960 };
    const size_t b_shape[] = { 1 };
    status = xnn_reshape_add_nd_qu8(
      op105,
      4, a_shape, 1, b_shape,
      /*threadpool=*/threadpool);
  }
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #105" << std::endl;
    return ExecutionPlan();
  }

  {
    const size_t a_shape[] = { 1, 1, 1, 960 };
    const size_t b_shape[] = { 1 };
    status = xnn_reshape_multiply_nd_qu8(
      op106,
      4, a_shape, 1, b_shape,
      /*threadpool=*/threadpool);
  }
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #106" << std::endl;
    return ExecutionPlan();
  }

  {
    const size_t a_shape[] = { 1, 7, 7, 960 };
    const size_t b_shape[] = { 1, 1, 1, 960 };
    status = xnn_reshape_multiply_nd_qu8(
      op107,
      4, a_shape, 4, b_shape,
      /*threadpool=*/threadpool);
  }
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #107" << std::endl;
    return ExecutionPlan();
  }

{
  size_t op108_workspace_size = 0;
  size_t op108_workspace_alignment = 0;
  status = xnn_reshape_convolution2d_nhwc_qu8(
    op108,
    /*batch_size=*/1, /*input_height=*/7, /*input_width=*/7,
    &op108_workspace_size, &op108_workspace_alignment,
    /*output_height_out=*/nullptr, /*output_width_out=*/nullptr,
    /*threadpool=*/threadpool);
  max_workspace_size = std::max(max_workspace_size, op108_workspace_size);
}
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #108" << std::endl;
    return ExecutionPlan();
  }

  {
    const size_t a_shape[] = { 1, 7, 7, 160 };
    const size_t b_shape[] = { 1, 7, 7, 160 };
    status = xnn_reshape_add_nd_qu8(
      op109,
      4, a_shape, 4, b_shape,
      /*threadpool=*/threadpool);
  }
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #109" << std::endl;
    return ExecutionPlan();
  }

{
  size_t op110_workspace_size = 0;
  size_t op110_workspace_alignment = 0;
  status = xnn_reshape_convolution2d_nhwc_qu8(
    op110,
    /*batch_size=*/1, /*input_height=*/7, /*input_width=*/7,
    &op110_workspace_size, &op110_workspace_alignment,
    /*output_height_out=*/nullptr, /*output_width_out=*/nullptr,
    /*threadpool=*/threadpool);
  max_workspace_size = std::max(max_workspace_size, op110_workspace_size);
}
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #110" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_reshape_copy_nc_x8(
    op111,
    /*batch_size=*/49,
    /*threadpool=*/threadpool);
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #111" << std::endl;
    return ExecutionPlan();
  }

{
  size_t op112_workspace_size = 0;
  size_t op112_workspace_alignment = 0;
  status = xnn_reshape_convolution2d_nhwc_qu8(
    op112,
    /*batch_size=*/1, /*input_height=*/7, /*input_width=*/7,
    &op112_workspace_size, &op112_workspace_alignment,
    /*output_height_out=*/nullptr, /*output_width_out=*/nullptr,
    /*threadpool=*/threadpool);
  max_workspace_size = std::max(max_workspace_size, op112_workspace_size);
}
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #112" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_reshape_copy_nc_x8(
    op113,
    /*batch_size=*/49,
    /*threadpool=*/threadpool);
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #113" << std::endl;
    return ExecutionPlan();
  }

  size_t op114_workspace_size = 0;
  size_t op114_workspace_alignment = 0;
  status = xnn_reshape_global_average_pooling_nwc_qu8(
    op114,
    /*batch_size=*/1, 49 /* width */,
    &op114_workspace_size, &op114_workspace_alignment,
    /*threadpool=*/threadpool);
  max_workspace_size = std::max(max_workspace_size, op114_workspace_size);
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #114" << std::endl;
    return ExecutionPlan();
  }

{
  size_t op115_workspace_size = 0;
  size_t op115_workspace_alignment = 0;
  status = xnn_reshape_convolution2d_nhwc_qu8(
    op115,
    /*batch_size=*/1, /*input_height=*/1, /*input_width=*/1,
    &op115_workspace_size, &op115_workspace_alignment,
    /*output_height_out=*/nullptr, /*output_width_out=*/nullptr,
    /*threadpool=*/threadpool);
  max_workspace_size = std::max(max_workspace_size, op115_workspace_size);
}
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #115" << std::endl;
    return ExecutionPlan();
  }

{
  size_t op116_workspace_size = 0;
  size_t op116_workspace_alignment = 0;
  status = xnn_reshape_convolution2d_nhwc_qu8(
    op116,
    /*batch_size=*/1, /*input_height=*/1, /*input_width=*/1,
    &op116_workspace_size, &op116_workspace_alignment,
    /*output_height_out=*/nullptr, /*output_width_out=*/nullptr,
    /*threadpool=*/threadpool);
  max_workspace_size = std::max(max_workspace_size, op116_workspace_size);
}
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #116" << std::endl;
    return ExecutionPlan();
  }

  {
    const size_t a_shape[] = { 1, 1, 1, 960 };
    const size_t b_shape[] = { 1 };
    status = xnn_reshape_add_nd_qu8(
      op117,
      4, a_shape, 1, b_shape,
      /*threadpool=*/threadpool);
  }
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #117" << std::endl;
    return ExecutionPlan();
  }

  {
    const size_t a_shape[] = { 1, 1, 1, 960 };
    const size_t b_shape[] = { 1 };
    status = xnn_reshape_multiply_nd_qu8(
      op118,
      4, a_shape, 1, b_shape,
      /*threadpool=*/threadpool);
  }
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #118" << std::endl;
    return ExecutionPlan();
  }

  {
    const size_t a_shape[] = { 1, 7, 7, 960 };
    const size_t b_shape[] = { 1, 1, 1, 960 };
    status = xnn_reshape_multiply_nd_qu8(
      op119,
      4, a_shape, 4, b_shape,
      /*threadpool=*/threadpool);
  }
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #119" << std::endl;
    return ExecutionPlan();
  }

{
  size_t op120_workspace_size = 0;
  size_t op120_workspace_alignment = 0;
  status = xnn_reshape_convolution2d_nhwc_qu8(
    op120,
    /*batch_size=*/1, /*input_height=*/7, /*input_width=*/7,
    &op120_workspace_size, &op120_workspace_alignment,
    /*output_height_out=*/nullptr, /*output_width_out=*/nullptr,
    /*threadpool=*/threadpool);
  max_workspace_size = std::max(max_workspace_size, op120_workspace_size);
}
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #120" << std::endl;
    return ExecutionPlan();
  }

  {
    const size_t a_shape[] = { 1, 7, 7, 160 };
    const size_t b_shape[] = { 1, 7, 7, 160 };
    status = xnn_reshape_add_nd_qu8(
      op121,
      4, a_shape, 4, b_shape,
      /*threadpool=*/threadpool);
  }
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #121" << std::endl;
    return ExecutionPlan();
  }

{
  size_t op122_workspace_size = 0;
  size_t op122_workspace_alignment = 0;
  status = xnn_reshape_convolution2d_nhwc_qu8(
    op122,
    /*batch_size=*/1, /*input_height=*/7, /*input_width=*/7,
    &op122_workspace_size, &op122_workspace_alignment,
    /*output_height_out=*/nullptr, /*output_width_out=*/nullptr,
    /*threadpool=*/threadpool);
  max_workspace_size = std::max(max_workspace_size, op122_workspace_size);
}
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #122" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_reshape_copy_nc_x8(
    op123,
    /*batch_size=*/49,
    /*threadpool=*/threadpool);
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #123" << std::endl;
    return ExecutionPlan();
  }

  size_t op124_workspace_size = 0;
  size_t op124_workspace_alignment = 0;
  status = xnn_reshape_global_average_pooling_nwc_qu8(
    op124,
    /*batch_size=*/1, 49 /* width */,
    &op124_workspace_size, &op124_workspace_alignment,
    /*threadpool=*/threadpool);
  max_workspace_size = std::max(max_workspace_size, op124_workspace_size);
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #124" << std::endl;
    return ExecutionPlan();
  }

{
  size_t op125_workspace_size = 0;
  size_t op125_workspace_alignment = 0;
  status = xnn_reshape_convolution2d_nhwc_qu8(
    op125,
    /*batch_size=*/1, /*input_height=*/1, /*input_width=*/1,
    &op125_workspace_size, &op125_workspace_alignment,
    /*output_height_out=*/nullptr, /*output_width_out=*/nullptr,
    /*threadpool=*/threadpool);
  max_workspace_size = std::max(max_workspace_size, op125_workspace_size);
}
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #125" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_reshape_copy_nc_x8(
    op126,
    /*batch_size=*/1,
    /*threadpool=*/threadpool);
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #126" << std::endl;
    return ExecutionPlan();
  }

  size_t op127_workspace_size = 0;
  size_t op127_workspace_alignment = 0;
  status = xnn_reshape_global_average_pooling_nwc_qu8(
    op127,
    /*batch_size=*/1, 1 /* width */,
    &op127_workspace_size, &op127_workspace_alignment,
    /*threadpool=*/threadpool);
  max_workspace_size = std::max(max_workspace_size, op127_workspace_size);
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #127" << std::endl;
    return ExecutionPlan();
  }

{
  size_t op128_workspace_size = 0;
  size_t op128_workspace_alignment = 0;
  status = xnn_reshape_convolution2d_nhwc_qu8(
    op128,
    /*batch_size=*/1, /*input_height=*/1, /*input_width=*/1,
    &op128_workspace_size, &op128_workspace_alignment,
    /*output_height_out=*/nullptr, /*output_width_out=*/nullptr,
    /*threadpool=*/threadpool);
  max_workspace_size = std::max(max_workspace_size, op128_workspace_size);
}
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #128" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_reshape_copy_nc_x8(
    op129,
    /*batch_size=*/1001,
    /*threadpool=*/threadpool);
  if (status != xnn_status_success) {
    std::cerr << "failed to reshape operation #129" << std::endl;
    return ExecutionPlan();
  }



  Workspace workspace(max_workspace_size);

  status = xnn_setup_convolution2d_nhwc_qu8(
    op0,
    /*workspace=*/ nullptr, /*input=*/v0.data(), /*output=*/v1.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #0" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_copy_nc_x8(
    op1,
    /*input=*/v1.data(), /*output=*/v2.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #1" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_convolution2d_nhwc_qu8(
    op2,
    /*workspace=*/ nullptr, /*input=*/v2.data(), /*output=*/v3.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #2" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_convolution2d_nhwc_qu8(
    op3,
    /*workspace=*/ nullptr, /*input=*/v3.data(), /*output=*/v4.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #3" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_add_nd_qu8(
    op4,
    v4.data() /* a */, v2.data() /* b */, /*output=*/v5.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #4" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_convolution2d_nhwc_qu8(
    op5,
    /*workspace=*/ nullptr, /*input=*/v5.data(), /*output=*/v6.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #5" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_convolution2d_nhwc_qu8(
    op6,
    /*workspace=*/ nullptr, /*input=*/v6.data(), /*output=*/v7.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #6" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_convolution2d_nhwc_qu8(
    op7,
    /*workspace=*/ nullptr, /*input=*/v7.data(), /*output=*/v8.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #7" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_convolution2d_nhwc_qu8(
    op8,
    /*workspace=*/ nullptr, /*input=*/v8.data(), /*output=*/v9.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #8" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_convolution2d_nhwc_qu8(
    op9,
    /*workspace=*/ nullptr, /*input=*/v9.data(), /*output=*/v10.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #9" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_convolution2d_nhwc_qu8(
    op10,
    /*workspace=*/ nullptr, /*input=*/v10.data(), /*output=*/v11.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #10" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_add_nd_qu8(
    op11,
    v11.data() /* a */, v8.data() /* b */, /*output=*/v12.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #11" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_convolution2d_nhwc_qu8(
    op12,
    /*workspace=*/ nullptr, /*input=*/v12.data(), /*output=*/v13.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #12" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_convolution2d_nhwc_qu8(
    op13,
    /*workspace=*/ nullptr, /*input=*/v13.data(), /*output=*/v14.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #13" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_global_average_pooling_nwc_qu8(
    op14,
    workspace.data(),
    /*input=*/v14.data(), /*output=*/v15.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #14" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_convolution2d_nhwc_qu8(
    op15,
    /*workspace=*/ nullptr, /*input=*/v15.data(), /*output=*/v16.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #15" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_convolution2d_nhwc_qu8(
    op16,
    /*workspace=*/ nullptr, /*input=*/v16.data(), /*output=*/v17.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #16" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_add_nd_qu8(
    op17,
    v17.data() /* a */, w157.data() /* b */, /*output=*/v18.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #17" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_multiply_nd_qu8(
    op18,
    v18.data() /* a */, w158.data() /* b */, /*output=*/v19.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #18" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_multiply_nd_qu8(
    op19,
    v14.data() /* a */, v19.data() /* b */, /*output=*/v20.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #19" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_convolution2d_nhwc_qu8(
    op20,
    /*workspace=*/ nullptr, /*input=*/v20.data(), /*output=*/v21.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #20" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_convolution2d_nhwc_qu8(
    op21,
    /*workspace=*/ nullptr, /*input=*/v21.data(), /*output=*/v22.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #21" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_convolution2d_nhwc_qu8(
    op22,
    /*workspace=*/ nullptr, /*input=*/v22.data(), /*output=*/v23.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #22" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_global_average_pooling_nwc_qu8(
    op23,
    workspace.data(),
    /*input=*/v23.data(), /*output=*/v24.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #23" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_convolution2d_nhwc_qu8(
    op24,
    /*workspace=*/ nullptr, /*input=*/v24.data(), /*output=*/v25.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #24" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_convolution2d_nhwc_qu8(
    op25,
    /*workspace=*/ nullptr, /*input=*/v25.data(), /*output=*/v26.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #25" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_add_nd_qu8(
    op26,
    v26.data() /* a */, w169.data() /* b */, /*output=*/v27.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #26" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_multiply_nd_qu8(
    op27,
    v27.data() /* a */, w170.data() /* b */, /*output=*/v28.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #27" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_multiply_nd_qu8(
    op28,
    v23.data() /* a */, v28.data() /* b */, /*output=*/v29.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #28" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_convolution2d_nhwc_qu8(
    op29,
    /*workspace=*/ nullptr, /*input=*/v29.data(), /*output=*/v30.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #29" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_add_nd_qu8(
    op30,
    v30.data() /* a */, v21.data() /* b */, /*output=*/v31.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #30" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_convolution2d_nhwc_qu8(
    op31,
    /*workspace=*/ nullptr, /*input=*/v31.data(), /*output=*/v32.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #31" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_convolution2d_nhwc_qu8(
    op32,
    /*workspace=*/ nullptr, /*input=*/v32.data(), /*output=*/v33.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #32" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_global_average_pooling_nwc_qu8(
    op33,
    workspace.data(),
    /*input=*/v33.data(), /*output=*/v34.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #33" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_convolution2d_nhwc_qu8(
    op34,
    /*workspace=*/ nullptr, /*input=*/v34.data(), /*output=*/v35.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #34" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_convolution2d_nhwc_qu8(
    op35,
    /*workspace=*/ nullptr, /*input=*/v35.data(), /*output=*/v36.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #35" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_add_nd_qu8(
    op36,
    v36.data() /* a */, w181.data() /* b */, /*output=*/v37.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #36" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_multiply_nd_qu8(
    op37,
    v37.data() /* a */, w182.data() /* b */, /*output=*/v38.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #37" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_multiply_nd_qu8(
    op38,
    v33.data() /* a */, v38.data() /* b */, /*output=*/v39.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #38" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_convolution2d_nhwc_qu8(
    op39,
    /*workspace=*/ nullptr, /*input=*/v39.data(), /*output=*/v40.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #39" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_add_nd_qu8(
    op40,
    v40.data() /* a */, v31.data() /* b */, /*output=*/v41.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #40" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_convolution2d_nhwc_qu8(
    op41,
    /*workspace=*/ nullptr, /*input=*/v41.data(), /*output=*/v42.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #41" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_copy_nc_x8(
    op42,
    /*input=*/v42.data(), /*output=*/v43.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #42" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_convolution2d_nhwc_qu8(
    op43,
    /*workspace=*/ nullptr, /*input=*/v43.data(), /*output=*/v44.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #43" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_copy_nc_x8(
    op44,
    /*input=*/v44.data(), /*output=*/v45.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #44" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_convolution2d_nhwc_qu8(
    op45,
    /*workspace=*/ nullptr, /*input=*/v45.data(), /*output=*/v46.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #45" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_convolution2d_nhwc_qu8(
    op46,
    /*workspace=*/ nullptr, /*input=*/v46.data(), /*output=*/v47.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #46" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_copy_nc_x8(
    op47,
    /*input=*/v47.data(), /*output=*/v48.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #47" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_convolution2d_nhwc_qu8(
    op48,
    /*workspace=*/ nullptr, /*input=*/v48.data(), /*output=*/v49.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #48" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_copy_nc_x8(
    op49,
    /*input=*/v49.data(), /*output=*/v50.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #49" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_convolution2d_nhwc_qu8(
    op50,
    /*workspace=*/ nullptr, /*input=*/v50.data(), /*output=*/v51.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #50" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_add_nd_qu8(
    op51,
    v51.data() /* a */, v46.data() /* b */, /*output=*/v52.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #51" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_convolution2d_nhwc_qu8(
    op52,
    /*workspace=*/ nullptr, /*input=*/v52.data(), /*output=*/v53.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #52" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_copy_nc_x8(
    op53,
    /*input=*/v53.data(), /*output=*/v54.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #53" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_convolution2d_nhwc_qu8(
    op54,
    /*workspace=*/ nullptr, /*input=*/v54.data(), /*output=*/v55.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #54" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_copy_nc_x8(
    op55,
    /*input=*/v55.data(), /*output=*/v56.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #55" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_convolution2d_nhwc_qu8(
    op56,
    /*workspace=*/ nullptr, /*input=*/v56.data(), /*output=*/v57.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #56" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_add_nd_qu8(
    op57,
    v57.data() /* a */, v52.data() /* b */, /*output=*/v58.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #57" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_convolution2d_nhwc_qu8(
    op58,
    /*workspace=*/ nullptr, /*input=*/v58.data(), /*output=*/v59.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #58" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_copy_nc_x8(
    op59,
    /*input=*/v59.data(), /*output=*/v60.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #59" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_convolution2d_nhwc_qu8(
    op60,
    /*workspace=*/ nullptr, /*input=*/v60.data(), /*output=*/v61.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #60" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_copy_nc_x8(
    op61,
    /*input=*/v61.data(), /*output=*/v62.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #61" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_convolution2d_nhwc_qu8(
    op62,
    /*workspace=*/ nullptr, /*input=*/v62.data(), /*output=*/v63.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #62" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_add_nd_qu8(
    op63,
    v63.data() /* a */, v58.data() /* b */, /*output=*/v64.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #63" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_convolution2d_nhwc_qu8(
    op64,
    /*workspace=*/ nullptr, /*input=*/v64.data(), /*output=*/v65.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #64" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_copy_nc_x8(
    op65,
    /*input=*/v65.data(), /*output=*/v66.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #65" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_convolution2d_nhwc_qu8(
    op66,
    /*workspace=*/ nullptr, /*input=*/v66.data(), /*output=*/v67.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #66" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_copy_nc_x8(
    op67,
    /*input=*/v67.data(), /*output=*/v68.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #67" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_global_average_pooling_nwc_qu8(
    op68,
    workspace.data(),
    /*input=*/v68.data(), /*output=*/v69.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #68" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_convolution2d_nhwc_qu8(
    op69,
    /*workspace=*/ nullptr, /*input=*/v69.data(), /*output=*/v70.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #69" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_convolution2d_nhwc_qu8(
    op70,
    /*workspace=*/ nullptr, /*input=*/v70.data(), /*output=*/v71.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #70" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_add_nd_qu8(
    op71,
    v71.data() /* a */, w217.data() /* b */, /*output=*/v72.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #71" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_multiply_nd_qu8(
    op72,
    v72.data() /* a */, w218.data() /* b */, /*output=*/v73.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #72" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_multiply_nd_qu8(
    op73,
    v68.data() /* a */, v73.data() /* b */, /*output=*/v74.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #73" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_convolution2d_nhwc_qu8(
    op74,
    /*workspace=*/ nullptr, /*input=*/v74.data(), /*output=*/v75.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #74" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_convolution2d_nhwc_qu8(
    op75,
    /*workspace=*/ nullptr, /*input=*/v75.data(), /*output=*/v76.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #75" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_copy_nc_x8(
    op76,
    /*input=*/v76.data(), /*output=*/v77.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #76" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_convolution2d_nhwc_qu8(
    op77,
    /*workspace=*/ nullptr, /*input=*/v77.data(), /*output=*/v78.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #77" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_copy_nc_x8(
    op78,
    /*input=*/v78.data(), /*output=*/v79.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #78" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_global_average_pooling_nwc_qu8(
    op79,
    workspace.data(),
    /*input=*/v79.data(), /*output=*/v80.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #79" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_convolution2d_nhwc_qu8(
    op80,
    /*workspace=*/ nullptr, /*input=*/v80.data(), /*output=*/v81.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #80" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_convolution2d_nhwc_qu8(
    op81,
    /*workspace=*/ nullptr, /*input=*/v81.data(), /*output=*/v82.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #81" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_add_nd_qu8(
    op82,
    v82.data() /* a */, w229.data() /* b */, /*output=*/v83.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #82" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_multiply_nd_qu8(
    op83,
    v83.data() /* a */, w230.data() /* b */, /*output=*/v84.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #83" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_multiply_nd_qu8(
    op84,
    v79.data() /* a */, v84.data() /* b */, /*output=*/v85.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #84" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_convolution2d_nhwc_qu8(
    op85,
    /*workspace=*/ nullptr, /*input=*/v85.data(), /*output=*/v86.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #85" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_add_nd_qu8(
    op86,
    v86.data() /* a */, v75.data() /* b */, /*output=*/v87.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #86" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_convolution2d_nhwc_qu8(
    op87,
    /*workspace=*/ nullptr, /*input=*/v87.data(), /*output=*/v88.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #87" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_copy_nc_x8(
    op88,
    /*input=*/v88.data(), /*output=*/v89.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #88" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_convolution2d_nhwc_qu8(
    op89,
    /*workspace=*/ nullptr, /*input=*/v89.data(), /*output=*/v90.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #89" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_copy_nc_x8(
    op90,
    /*input=*/v90.data(), /*output=*/v91.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #90" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_global_average_pooling_nwc_qu8(
    op91,
    workspace.data(),
    /*input=*/v91.data(), /*output=*/v92.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #91" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_convolution2d_nhwc_qu8(
    op92,
    /*workspace=*/ nullptr, /*input=*/v92.data(), /*output=*/v93.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #92" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_convolution2d_nhwc_qu8(
    op93,
    /*workspace=*/ nullptr, /*input=*/v93.data(), /*output=*/v94.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #93" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_add_nd_qu8(
    op94,
    v94.data() /* a */, w241.data() /* b */, /*output=*/v95.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #94" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_multiply_nd_qu8(
    op95,
    v95.data() /* a */, w242.data() /* b */, /*output=*/v96.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #95" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_multiply_nd_qu8(
    op96,
    v91.data() /* a */, v96.data() /* b */, /*output=*/v97.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #96" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_convolution2d_nhwc_qu8(
    op97,
    /*workspace=*/ nullptr, /*input=*/v97.data(), /*output=*/v98.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #97" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_convolution2d_nhwc_qu8(
    op98,
    /*workspace=*/ nullptr, /*input=*/v98.data(), /*output=*/v99.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #98" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_copy_nc_x8(
    op99,
    /*input=*/v99.data(), /*output=*/v100.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #99" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_convolution2d_nhwc_qu8(
    op100,
    /*workspace=*/ nullptr, /*input=*/v100.data(), /*output=*/v101.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #100" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_copy_nc_x8(
    op101,
    /*input=*/v101.data(), /*output=*/v102.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #101" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_global_average_pooling_nwc_qu8(
    op102,
    workspace.data(),
    /*input=*/v102.data(), /*output=*/v103.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #102" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_convolution2d_nhwc_qu8(
    op103,
    /*workspace=*/ nullptr, /*input=*/v103.data(), /*output=*/v104.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #103" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_convolution2d_nhwc_qu8(
    op104,
    /*workspace=*/ nullptr, /*input=*/v104.data(), /*output=*/v105.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #104" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_add_nd_qu8(
    op105,
    v105.data() /* a */, w253.data() /* b */, /*output=*/v106.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #105" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_multiply_nd_qu8(
    op106,
    v106.data() /* a */, w254.data() /* b */, /*output=*/v107.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #106" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_multiply_nd_qu8(
    op107,
    v102.data() /* a */, v107.data() /* b */, /*output=*/v108.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #107" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_convolution2d_nhwc_qu8(
    op108,
    /*workspace=*/ nullptr, /*input=*/v108.data(), /*output=*/v109.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #108" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_add_nd_qu8(
    op109,
    v109.data() /* a */, v98.data() /* b */, /*output=*/v110.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #109" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_convolution2d_nhwc_qu8(
    op110,
    /*workspace=*/ nullptr, /*input=*/v110.data(), /*output=*/v111.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #110" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_copy_nc_x8(
    op111,
    /*input=*/v111.data(), /*output=*/v112.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #111" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_convolution2d_nhwc_qu8(
    op112,
    /*workspace=*/ nullptr, /*input=*/v112.data(), /*output=*/v113.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #112" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_copy_nc_x8(
    op113,
    /*input=*/v113.data(), /*output=*/v114.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #113" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_global_average_pooling_nwc_qu8(
    op114,
    workspace.data(),
    /*input=*/v114.data(), /*output=*/v115.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #114" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_convolution2d_nhwc_qu8(
    op115,
    /*workspace=*/ nullptr, /*input=*/v115.data(), /*output=*/v116.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #115" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_convolution2d_nhwc_qu8(
    op116,
    /*workspace=*/ nullptr, /*input=*/v116.data(), /*output=*/v117.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #116" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_add_nd_qu8(
    op117,
    v117.data() /* a */, w265.data() /* b */, /*output=*/v118.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #117" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_multiply_nd_qu8(
    op118,
    v118.data() /* a */, w266.data() /* b */, /*output=*/v119.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #118" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_multiply_nd_qu8(
    op119,
    v114.data() /* a */, v119.data() /* b */, /*output=*/v120.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #119" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_convolution2d_nhwc_qu8(
    op120,
    /*workspace=*/ nullptr, /*input=*/v120.data(), /*output=*/v121.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #120" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_add_nd_qu8(
    op121,
    v121.data() /* a */, v110.data() /* b */, /*output=*/v122.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #121" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_convolution2d_nhwc_qu8(
    op122,
    /*workspace=*/ nullptr, /*input=*/v122.data(), /*output=*/v123.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #122" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_copy_nc_x8(
    op123,
    /*input=*/v123.data(), /*output=*/v124.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #123" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_global_average_pooling_nwc_qu8(
    op124,
    workspace.data(),
    /*input=*/v124.data(), /*output=*/v125.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #124" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_convolution2d_nhwc_qu8(
    op125,
    /*workspace=*/ nullptr, /*input=*/v125.data(), /*output=*/v126.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #125" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_copy_nc_x8(
    op126,
    /*input=*/v126.data(), /*output=*/v127.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #126" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_global_average_pooling_nwc_qu8(
    op127,
    workspace.data(),
    /*input=*/v127.data(), /*output=*/v128.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #127" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_convolution2d_nhwc_qu8(
    op128,
    /*workspace=*/ nullptr, /*input=*/v128.data(), /*output=*/v129.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #128" << std::endl;
    return ExecutionPlan();
  }

  status = xnn_setup_copy_nc_x8(
    op129,
    /*input=*/v129.data(), /*output=*/v130.data());
  if (status != xnn_status_success) {
    std::cerr << "failed to setup operation #129" << std::endl;
    return ExecutionPlan();
  }

  #pragma clang diagnostic push
  #pragma clang diagnostic ignored "-Wpessimizing-move"
  return ExecutionPlan{operators, workspace};
  #pragma clang diagnostic pop
}

}  // namespace models
