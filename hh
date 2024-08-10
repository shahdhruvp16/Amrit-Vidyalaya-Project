/* Features Section Styles */
#features {
  padding: 100px 0;
  text-align: center;
  background-color: #fff;
}

#features h2 {
  font-size: 2.5rem;
  margin-bottom: 20px;
}

#features p {
  font-size: 1.1rem;
  color: #666;
  margin-bottom: 40px;
}

.fea-base {
  display: flex;
  justify-content: center;
  gap: 80px;
  flex-wrap: wrap;
}

.fea-box {
  flex: 1 1 300px;
  max-width: 300px;
  text-align: center;
  margin-bottom: 30px;
}

.fea-box i {
  font-size: 4rem;
  margin-bottom: 20px;
  color: #007bff;
}

.fea-box h3 {
  font-size: 1.5rem;
  color: #333;
}



/* Board's Message Section Styles */
#chm {
    padding: 100px 0;
    text-align: center;
    background-color: #f7f0f0;
  }
  
  .chm-txt {
    max-width: 800px;
    margin: 0 auto;
  }
  
  .chm-txt h2 {
    font-size: 2.5rem;
    margin-bottom: 20px;
  }
  
  .chm-txt p {
    font-size: 1.1rem;
    color: #666;
    line-height: 1.8;
    margin-bottom: 20px;
  }
  
  .chm-txt .read {
    text-decoration: none;
    color: #007bff;
    font-size: 1.1rem;
    transition: all 0.3s ease;
  }
  
  .chm-txt .read:hover {
    color: #0056b3;
  }


  
  <!-- Board's Message Section -->
  <section id="chm">
    <div class="chm-txt">
      <h2>Board's Message</h2>
      <p>Let me begin with our vision. Amrit Vidyalaya believes in creating leaders – children who will face their future with confidence, excitement and responsibility. We see a world where Amritians have made a mark in various walks of society – science, finance, health, sports, the arts and so on. Moreover, we see a future where Amritians are leading lives grounded in strong values of love, equality, freedom and truth. In one sentence, we believe in creating leaders with a terrific blend of Noble Hearts and Able Minds!</p>
      <p>Visions only become real when there is a team of dedicated people who work very hard to make sure that all the actions are aligned to the large dream. The same is true for Amrit. We are very proud of and grateful for the team of teachers and staff who LIVE the Amrit values and put their every ounce of effort to ensure that we create an environment where children flourish.</p>
      <a class="read" href="message.html">Read More</a>
    </div>
  </section>


  <!-- Features Section -->
  <section id="features">
    <h2>Awesome Features</h2>
    <p>Lorem ipsum dolor sit amet consectetur, adipisicing elit. Harum odio dicta corporis, necessitatibus consectetur vel cumque quia eaque error! Aperiam illum, facilis obcaecati quidem earum asperiores modi temporibus dolor laudantium.</p>
    <div class="fea-base">

      <div class="fea-box">
        <i class='bx bxs-graduation'></i><br>
        <h3>Courses</h3>
      </div>

      <div class="fea-box">
        <i class='bx bxs-certification'></i>
        <h3>Certification</h3>
      </div>

      <div class="fea-box">
        <i class='bx bxs-edit'></i>
        <h3>Testimonial</h3>
      </div>

    </div>
  </section>